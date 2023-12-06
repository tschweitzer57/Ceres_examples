// Ceres Solver - A fast non-linear least squares minimizer
// Copyright 2023 Google Inc. All rights reserved.
// http://ceres-solver.org/
//
// Author: keir@google.com (Keir Mierle)
//
// A simple example of using the Ceres minimizer.
//
// Minimize 0.5 (10 - x)^2 using jacobian matrix computed using
// automatic differentiation.
#include "ceres/ceres.h"
#include "glog/logging.h"
// A templated cost functor that implements the residual r = 10 -
// x. The method operator() is templated so that we can then use an
// automatic differentiation wrapper around it to generate its
// derivatives.
struct R1 {
  template <typename T>
  bool operator()(const T* const x1, const T* const x2, T* residual) const {
    residual[0] = x1[0] + 10.0*x2[0];
    return true;
  }
};

struct R2 {
    template <typename T>
    bool operator()(const T* const x3, const T* const x4, T* residual) const {
        residual[0] = std::sqrt(5.0)*(x3[0]-x4[0]);
        return true;
    }
};

struct R3 {
    template <typename T>
    bool operator()(const T* const x2, const T* const x3, T* residual) const {
        residual[0] = (x2[0] - 2.0 * x3[0]) * (x2[0] - 2.0 * x3[0]);
        return true;
    }
};

struct R4 {
    template <typename T>
    bool operator()(const T* const x1, const T* const x4, T* residual) const {
        residual[0] = std::sqrt(10.0) * (x1[0] - x4[0]) * (x1[0] - x4[0]);
        return true;
    }
};

int main(int argc, char** argv) {
  google::InitGoogleLogging(argv[0]);
  // The variable to solve for with its initial value. It will be
  // mutated in place by the solver.
  double x1 = 3.0;
  double x2 = -1.0;
  double x3 = 0.0;
  double x4 = 1.0;
  const double initial_x1 = x1;
  const double initial_x2 = x2;
  const double initial_x3 = x3;
  const double initial_x4 = x4;
  // Build the problem.
  ceres::Problem problem;
  // Set up the only cost function (also known as residual). This uses
  // auto-differentiation to obtain the derivative (jacobian).
  problem.AddResidualBlock(new ceres::AutoDiffCostFunction<R1, 1, 1, 1>(new R1), nullptr, &x1, &x2);
  problem.AddResidualBlock(new ceres::AutoDiffCostFunction<R2, 1, 1, 1>(new R2), nullptr, &x3, &x4);
  problem.AddResidualBlock(new ceres::AutoDiffCostFunction<R3, 1, 1, 1>(new R3), nullptr, &x2, &x3);
  problem.AddResidualBlock(new ceres::AutoDiffCostFunction<R4, 1, 1, 1>(new R4), nullptr, &x1, &x4);
  // Run the solver!
  ceres::Solver::Options options;
  options.minimizer_progress_to_stdout = true;
  ceres::Solver::Summary summary;
  ceres::Solve(options, &problem, &summary);
  std::cout << summary.BriefReport() << "\n";
  std::cout << "x1 : " << initial_x1 << " -> " << x1 << "\n";
  std::cout << "x2 : " << initial_x2 << " -> " << x2 << "\n";
  std::cout << "x3 : " << initial_x3 << " -> " << x3 << "\n";
  std::cout << "x4 : " << initial_x4 << " -> " << x4 << "\n";
  return 0;
}
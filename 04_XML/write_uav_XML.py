import xml.etree.ElementTree as ET

root = ET.Element('root')
uav1 = ET.SubElement(root, 'uav1')
uav2 = ET.SubElement(root, 'uav2')
uav3 = ET.SubElement(root, 'uav3')
uav4 = ET.SubElement(root, 'uav4')

gt_uav1 = ET.SubElement(uav1, 'ground truth')
gt_uav2 = ET.SubElement(uav2, 'ground truth')
gt_uav3 = ET.SubElement(uav3, 'ground truth')
gt_uav4 = ET.SubElement(uav4, 'ground truth')

uwb_uav1 = ET.SubElement(uav1, 'uwb')
uwb_uav2 = ET.SubElement(uav2, 'uwb')
uwb_uav3 = ET.SubElement(uav3, 'uwb')
uwb_uav4 = ET.SubElement(uav4, 'uwb')

vio_uav1 = ET.SubElement(uav1, 'vio')
vio_uav2 = ET.SubElement(uav2, 'vio')
vio_uav3 = ET.SubElement(uav3, 'vio')
vio_uav4 = ET.SubElement(uav4, 'vio')

vd_uav1 = ET.SubElement(uav1, 'vd')
vd_uav2 = ET.SubElement(uav2, 'vd')
vd_uav3 = ET.SubElement(uav3, 'vd')
vd_uav4 = ET.SubElement(uav4, 'vd')

lc_uav1 = ET.SubElement(uav1, 'lc')
lc_uav2 = ET.SubElement(uav2, 'lc')
lc_uav3 = ET.SubElement(uav3, 'lc')
lc_uav4 = ET.SubElement(uav4, 'lc')

for i in range(0, 10):
    strval='data'+str(i)
    data = ET.Element(strval)
    dist1 = ET.SubElement(data, 'x')
    dist1.text = str(20.0)
    dist2 = ET.SubElement(data, 'y')
    dist2.text = str(20.0)
    dist3 = ET.SubElement(data, 'z')
    dist3.text = str(20.0)
    gt_uav1.append(data)

for i in range(0, 10):
    strval='data'+str(i)
    data = ET.Element(strval)
    dist1 = ET.SubElement(data, 'Distance to B')
    dist1.text = str(20.0)
    dist2 = ET.SubElement(data, 'Distance to C')
    dist2.text = str(20.0)
    dist3 = ET.SubElement(data, 'Distance to D')
    dist3.text = str(20.0)
    uwb_uav1.append(data)
    
for i in range(0, 10):
    strval='data'+str(i)
    data = ET.Element(strval)
    dist1 = ET.SubElement(data, 'x')
    dist1.text = str(20.0)
    dist2 = ET.SubElement(data, 'Distance to C')
    dist2.text = str(20.0)
    dist3 = ET.SubElement(data, 'Distance to D')
    dist3.text = str(20.0)
    uwb_uav1.append(data)
    
for i in range(0, 10):
    strval='data'+str(i)
    data = ET.Element(strval)
    dist1 = ET.SubElement(data, 'Distance to B')
    dist1.text = str(20.0)
    dist2 = ET.SubElement(data, 'Distance to C')
    dist2.text = str(20.0)
    dist3 = ET.SubElement(data, 'Distance to D')
    dist3.text = str(20.0)
    uwb_uav1.append(data)
    
for i in range(0, 10):
    strval='data'+str(i)
    data = ET.Element(strval)
    dist1 = ET.SubElement(data, 'Distance to B')
    dist1.text = str(20.0)
    dist2 = ET.SubElement(data, 'Distance to C')
    dist2.text = str(20.0)
    dist3 = ET.SubElement(data, 'Distance to D')
    dist3.text = str(20.0)
    uwb_uav1.append(data)

tree = ET.ElementTree(root)
ET.indent(root)
tree.write('uav_data.xml', encoding="utf-8", xml_declaration=True)

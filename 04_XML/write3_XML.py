import xml.etree.ElementTree as ET
root = ET.fromstring("<fruits><fruit>banana</fruit><fruit>apple</fruit></fruits>""")
tree = ET.ElementTree(root)
    
ET.indent(root)
# writing xml
tree.write("example.xml", encoding="utf-8", xml_declaration=True)
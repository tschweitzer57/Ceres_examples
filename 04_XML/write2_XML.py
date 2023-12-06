import xml.etree.ElementTree as ET
root = ET.Element('root')
person = ET.SubElement(root, 'person')
name = ET.SubElement(person, 'name')
age = ET.SubElement(person, 'age') 
name.text = 'John Doe'
age.text = '30' 
tree = ET.ElementTree(root)
ET.indent(root)
tree.write('person.xml', encoding="utf-8", xml_declaration=True) 

root = ET.Element('order') 
customer = ET.SubElement(root, 'customer', name='John Doe', address='123 Main St') 
order = ET.SubElement(root, 'order', date='2020-01-01', id='12345')
items = ET.SubElement(order, 'items') 
item1 = ET.SubElement(items, 'item', code='A100', description='Product A', quantity='5')
item2 = ET.SubElement(items, 'item', code='B200', description='Product B', quantity='10')
tree = ET.ElementTree(root)
ET.indent(root)
tree.write('order.xml', encoding="utf-8", xml_declaration=True)

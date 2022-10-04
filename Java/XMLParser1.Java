package net.viralpatel.java.xmlparser;

import java.io.File;
import java.io.IOException;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

public class XMLParser1 {

	public void getAllUserNames(String fileName) {
		try {
			DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
			DocumentBuilder db = dbf.newDocumentBuilder();
			File file = new File(fileName);
			if (file.exists()) {
				Document doc = db.parse(file);
				Element docEle = doc.getDocumentElement();

				// Print root element of the document
				System.out.println("Root element of the document: " + docEle.getNodeName());

				NodeList bookList = docEle.getElementsByTagName("book");

				// Print total student elements in document
				System.out.println("Total catalog: " + bookList.getLength());

				if (bookList != null && bookList.getLength() > 0) {
					for (int i = 0; i < bookList.getLength(); i++) {

						Node node = bookList.item(i);

						if (node.getNodeType() == Node.ELEMENT_NODE) {

							System.out.println("=====================");

							Element e = (Element) node;
							NodeList nodeList = e.getElementsByTagName("author");
							System.out.println("Author: " + nodeList.item(0).getChildNodes().item(0).getNodeValue());

							nodeList = e.getElementsByTagName("title");
							System.out.println("Title: " + nodeList.item(0).getChildNodes().item(0).getNodeValue());

							nodeList = e.getElementsByTagName("genre");
							System.out.println("Genre: " + nodeList.item(0).getChildNodes().item(0).getNodeValue());

							nodeList = e.getElementsByTagName("price");
							System.out.println("Price: " + nodeList.item(0).getChildNodes().item(0).getNodeValue());

							nodeList = e.getElementsByTagName("publish_date");
							System.out.println(
									"Publish_date: " + nodeList.item(0).getChildNodes().item(0).getNodeValue());

							nodeList = e.getElementsByTagName("description");
							System.out
									.println("Description: " + nodeList.item(0).getChildNodes().item(0).getNodeValue());
						}
					}
				} else {
					System.exit(1);
				}
			}
		} catch (Exception e) {
			System.out.println(e);
		}
	}

	public static void main(String[] args) {

		XMLParser1 parser = new XMLParser1();
		parser.getAllUserNames("c:\\Projects\\Xhexk.xml");
	}
}

/*
 * format.h
 * The file provides the functions that will generate the xml for the EAS request or response  
 * John Lowry <johnlowry@gmail.com> 
 */
#include <stdio.h>
#include <string.h>
#include <libxml/encoding.h>
#include <libxml/xmlwriter.h>

void
easStartDoc(xmlTextWriterPtr);
void 
easStartFolderSync(xmlTextWriterPtr);

void 
easStartDoc(xmlTextWriterPtr writer)
{
	xmlTextWriterSetIndent(writer, 1);
	xmlTextWriterStartDocument(writer, "1.0", "UTF-8", NULL);
}

void 
easStartFolderSync(xmlTextWriterPtr writer)
{

	xmlTextWriterStartElementNS(writer, NULL, "FolderSync", "FolderHierarchy:");
}	

/*
	xmlTextWriterPtr writer = xmlNewTextWriterFilename("test.xml", 0);

	xmlTextWriterStartElementNS(writer, NULL, "FolderSync", "FolderHierarchy:");
	xmlTextWriterWriteElement(writer, "SyncKey", "0");
	xmlTextWriterEndDocument(writer);
	*/

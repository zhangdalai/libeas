#include <stdio.h>
#include <string.h>
#include <libxml/encoding.h>
#include <libxml/xmlwriter.h>

int main()
{
	xmlTextWriterPtr writer = xmlNewTextWriterFilename("test.xml", 0);
	xmlTextWriterSetIndent(writer, 1);
	xmlTextWriterStartDocument(writer, "1.0", "UTF-8", NULL);
	xmlTextWriterStartElementNS(writer, NULL, "FolderSync", "FolderHierarchy:");
	xmlTextWriterWriteElement(writer, "SyncKey", "0");
	

	xmlTextWriterEndDocument(writer);
	return 0;
}


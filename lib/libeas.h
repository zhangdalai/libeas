#include <stdio.h>
#include <string.h>
#include <libxml/encoding.h>
#include <libxml/xmlwriter.h>
#include "status.h"

void easStartDoc();

void easStartDoc()
{
	xmlTextWriterPtr doc;
	xmlTextWriterSetIndent(doc, 1);
	xmlTextWriterStartDocument(doc, "1.0", "UTF-8", NULL);
}

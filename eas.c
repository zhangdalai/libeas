#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libxml/encoding.h>
#include <libxml/xmlwriter.h>

void FolderSync();
void FolderSyncNS();

int main(int argc, char *argv[])
{
	int optchar;
	int verboseFlag = 0;
	char *cmd = "Sync";
	char *folder ="INBOX";
	extern char *optarg;
	extern int optind, optopt;


	while ((optchar = getopt(argc, argv, "vc:f:")) != -1)
	{
		switch (optchar)
		{
			case 'v':
				verboseFlag = 1;
				break;
			case 'c':
				cmd = optarg;
				/*if (verboseFlag > 0)
				{	
					printf("Using Sync command.\n");
				}*/
				break;
			
			case 'f':
				folder = optarg;
				break;

			default:
			case '?':
				printf("usage: %s -vcf\n-v for verbose\n-c <command> Command that you want to perform\n-f <folder> for what folder to work on\n", argv[0]);
				return 0;
		}
	}


	if (verboseFlag !=0)
	{
		fprintf(stdout, "Command line parsed to:\n");
		fprintf(stdout, "Verbose: %d\nCommand: %s\nFolder: %s\n",verboseFlag, cmd, folder);
	}

		
	FolderSync();

	return 0;
}

void FolderSync()
{
	char SyncKey[64] = {'0'};
	char *xmlHead = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
	char *xmlFolder = "\t<FolderSync>\n";
	char *xmlFolderFoot = "\t</FolderSync>\n";

	fprintf(stdout, "%s%s\t\t<SyncKey>%s</SyncKey>\n%s", xmlHead, xmlFolder, SyncKey,xmlFolderFoot);
}

void FolderSyncNS()
{
	char *myXml = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
					"\t<xs:schema\n"
	    			"\txmlns:tns=\"FolderHierarchy:\"\n"
					"\tattributeFormDefault=\"unqualified\"\n"
					"\telementFormDefault=\"qualified\"\n"
					"\ttargetNamespace=\"FolderHierarchy:\"\n"
					"\txmlns:xs=\"http://www.w3.org/2001/XMLSchema\">\n\n"
	
					"\t<xs:element name=\"FolderSync\">\n"
						"\t\t<xs:complexType>\n"
							"\t\t\t<xs:sequence>\n"
								"\t\t\t\t<xs:element name=\"SyncKey\">\n"
									"\t\t\t\t\t<xs:simpleType>\n"
										"\t\t\t\t\t\t<xs:restriction base=\"xs:string\">\n"
											"\t\t\t\t\t\t\t<xs:maxLength value=\"64\"/>\n"
										"\t\t\t\t\t\t</xs:restriction>\n"
									"\t\t\t\t\t</xs:simpleType>\n"
								"\t\t\t\t</xs:element>\n"
							"\t\t\t</xs:sequence>\n"
						"\t\t</xs:complexType>\n"
					"\t</xs:element>\n"

				"</xs:schema>\n";
	fprintf(stdout, "%s", myXml);

}
			

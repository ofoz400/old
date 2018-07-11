#include <stdio.h>

int AssemblerError; /*to recive TRUE (0) or FALSE (1) from definened enum- indicating when an error was found by the assmbler*/

int main(int argc, char *argv[])
{
	char *fileName;
	int nameLen;
	if (argc == 0)
	{
		fprintf(stderr, "Error - command line is empty . \n");
		exit(1);
	}
  
	if (argc == 1)
	{
		fprintf(stderr, "Error - file name is missing . \n");
		exit(1);
	}
  
  
	if (argc == 2)
	{
		fileName = argv[1];
		nameLen = strlen(fileName);
		AssemblerError = FALSE; /*to be changed to FALSE when an error is found by the assmbler in the command text*/
    
		fd = fopen(fileName, "r");
    
		if (!fd)
		{	
			fprintf(stderr, "Error opening file %s - file doesn't exist. \n", fileName);
      			exit(1);
		}
		
		assmblerTest(fd); /*going over the file to look for errors*/
		
		if (AssemblerError!)  /*in case no error is found by the assmbler- the rogram creates the output files (in the binary code) for the command lines*/
		{
			f = fopen(strcat(fileName, ".ob"), "w");
		}
  	}
	
	fclose(fd);
  
return 0;
}




int main(int argc, char *argv[])
{
  char *fileName;
  int nameLen;
  
	if (argc == 0)
	{
		fprintf(stderr, "Error - command line is empty . \n");
		return 1;
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
    
    fd = fopen(fileName, "r");
    
    if (!fd)
			fprintf(stderr, "Error opening file %s - file doesn't exist. \n", fileName);
      exit(1);
  }
  
return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*get the input source and copies it to a new string without double space*/
void clearDoubleSpace(const char *source, char *copy)
{
	  int i, j, tmp;
	 for(i = j = 0; source[i]; i++, j++)
	 {
	 	if(source[i] == ' ' || source[i] == '\t') {
	 		tmp = i+1;
	 		if(source[tmp] != '\0') {
	 			for(; (source[tmp] == ' ' || source[tmp] == '\t') && source[tmp]; tmp++)
	 				i++;
	 		}
	 	}
	 	if(source[i] == '\t')
	 		copy[j] = ' ';
	 	else
	     		copy[j] = source[i];	
	 }
	
	 copy[j] = '\0';
}
/*copies one word from source to word without any space befor and after*/
void getWord(const char *source, char *word)
{
	int i;
	
	for(; *source == ' ' && *source != '\0'; source++);
	
	for(i = 0; *source != ' ' && *source != '\0'; i++, source++) 
		word[i] = *source;
	
	word[i] = '\0';
}

void printBits(int x, FILE *fd)
{
	unsigned short mask;
	for(mask = 1 << 11; mask; mask >>= 1)
	{
		(x & mask) ? fprintf(fd, "/") : fprintf(fd, ".");
	}
	fprintf(fd, "\n");
}

int isComment(char *buf)
{
	for(; *buf == ' ' && *buf != '\0'; buf++);
	
	return (*buf == ';');
}
int isEmpty(char *buf)
{
	for(; isspace(*buf) && *buf != '\0'; buf++);
	
	return (*buf == '\0');
}
int getNegativ(char *buf)
{
	int neg = 0, i;
	for(i = 0; buf[i]; i++)
		if(buf[i] == '-' && isdigit(buf[i+1])){
			sscanf(buf+i, "%d", &neg);
			return neg;
		}
	return 1;
}

int main (int argc, char *argv[])
{
	char str[] = " ;	    noam   , shu   shan   8  ! !   -5    0 ", copy[80], word[80];
	int i;
	
	clearDoubleSpace(str, copy);
	printf("source =%s\ncopy =%s\n", str, copy);
	for(i = 0; copy[i]; i++)
	{
		getWord(copy+i, word);
		i += strlen(word);
		puts(word);
	}
	
	for(i = 0; copy[i]; i++)
	{
		if(isdigit(copy[i]))
			printBits(atoi(copy+i), stdout);
	}
	
	printf("isComment(copy) ? %s\n", isComment(copy) ? "true" : "false");
	
	fgets(word, sizeof(word), stdin);
	printf("isEmpty(word) ? %s\n", isEmpty(word) ? "empty" : "full");
	
	
	return 0;
}

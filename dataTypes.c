#include<stdlib.h>
#define MAX_PROGRAM_SIZE 256						/*max program size line count to be assembled*/
const char *guidanceTypes[]={".data",".string",".mat",".extern",".entry",NULL}; /*Char array to hold the guidance types */
const char *instructionNames[]={"mov","cmp","add","sub","not","clr","lea","inc","dec","jmp","bne","red","prn","jsr","rts","stop",NULL}; /*Char array to hold the instruction names */
int lineNumber;
int dataImage[MAX_PROGRAM_SIZE];
int instructionImage[MAX_PROGRAM_SIZE];
int IC, DC;

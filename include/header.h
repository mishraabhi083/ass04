// includes
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// macros
#define MAXBUFFER 80

// prototypes
void writer(FILE* read,FILE* write,char* databuffer);
int longestLineFinder(FILE* read,char *databuffer);

// includes
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// macros
#define _GNU_SOURCE
#define TRUE 1
#define FALSE 0
#define MAXBUFFER 80

// prototypes
void writer(FILE* read,FILE* write,char* databuffer);
int longestLineFinder(FILE* read,char *databuffer);
void getData(FILE* read);
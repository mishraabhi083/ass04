#include<header.h>

void writer(FILE* read,FILE* write,char* databuffer){
    if(fgets(databuffer,MAXBUFFER,read)){
        writer(read,write,(char *)malloc(MAXBUFFER*sizeof(char)));
        fputs(databuffer,write);
    }
    
}

int longestLineFinder(FILE* read,char *databuffer){
    int longest=-1;
    char *line=NULL,*l;
    int len=0;
    rewind(read);
    while((l = fgets(databuffer,MAXBUFFER,read))){

        if(strlen(l) > longest){
            longest=strlen(l);
            strcpy(l,line);
        }
    }
    printf("longest line : %s",line);
    return longest;
}
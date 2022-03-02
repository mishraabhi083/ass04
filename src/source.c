#include<header.h>

void writer(FILE* read,FILE* write,char* databuffer){
    if(fgets(databuffer,MAXBUFFER,read)){
        writer(read,write,(char *)malloc(MAXBUFFER*sizeof(char)));
        fputs(databuffer,write);
    }

}


void getData(FILE* read){
    char* databuffer = (char*)malloc(MAXBUFFER*sizeof(char));
    while(fgets(databuffer,MAXBUFFER,read)){
        printf("%s",databuffer);
    }
}

int longestLineFinder(FILE* read){
    ssize_t longest=-1;
    char *line=NULL;
    ssize_t SIZE=80;
    ssize_t len=0;
    while((len = getline(&line, &SIZE, read)) != -1){
        if(len > longest){
            longest=len;
        }
    }
    return longest;
}
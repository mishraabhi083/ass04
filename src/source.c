#include<header.h>

void writer(FILE* read,FILE* write,char* databuffer){
    if(fgets(databuffer,MAXBUFFER,read)){
        writer(read,write,(char *)malloc(MAXBUFFER*sizeof(char)));
        fputs(databuffer,write);
    }
    
}

void getData(FILE* read){
    rewind(read);
    char* databuffer = (char*)malloc(MAXBUFFER*sizeof(char));
    while(fgets(databuffer,MAXBUFFER,read)){
        printf("%s",databuffer);
    }
    // garbage collection
    if (databuffer)
        free(databuffer);
    return;
}

int longestLineFinder(FILE* read,char *databuffer){
    int longest=-1;
    char *line,*l;
    int len=0;
    rewind(read);
    while((l = fgets(databuffer,MAXBUFFER,read))){
        printf("%s",l);
        if(strlen(l) > longest){
            longest=strlen(l);
            strcpy(l,line);
        }
    }
    printf("longest line : %s ",line);

    return longest;
}
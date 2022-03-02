#define _GNU_SOURCE
#include<header.h>

int main(int argc , char** argv)
{
    FILE  *read,*write;
    char * databuffer = (char *)malloc(MAXBUFFER*sizeof(char));

    read = fopen("../files/text", "r");
    write = fopen("../files/new","w+");

    if(read && write){
        writer(read,write,databuffer);
        printf("file written --> ./files/new.txt\n");
    } else {
        printf("ERR!!! ");
    }
    // rewind(read);
    printf("nLongest line length : %d\n",longestLineFinder(read,databuffer));
    fclose(read);
    fclose(write);
    if (databuffer)
        free(databuffer);
    exit(EXIT_SUCCESS);
}

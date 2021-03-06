
#include<header.h>

void driver(FILE* read,FILE* write){
    int opt;
    printf("\n\nselect option :- \n");
    printf("1:checking input file\n");
    printf("2:cheking output file\n");
    printf("3:write out file using inp file\n");
    printf("4:longest line in files\n");
    printf("0:exit");
    while(TRUE){
        printf("\n>>> ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 0:
            printf("exit\n");
            return;
            break;
        case 1:
            printf("checking input file\n");
            read  ?
            rewind(write),
            getData(read) : printf("ERR!!\n");
            break;
        case 2:
            printf("cheking output file\n");
            write ? 
            rewind(write),
            getData(write) : printf("ERR!!\n");
            break;
        case 3:
            printf("writeing out file using inp file\n");
            if(read){
                char * databuffer = (char *)malloc(MAXBUFFER*sizeof(char));
                rewind(read);
                writer(read,write,databuffer);
                printf("file written --> ./files/new.txt\n");
            } else {
                printf("ERR!!! ");
            }
            break;
        case 4:
            read ? 
            rewind(read),
            printf("\nLongest line length : %d\n",longestLineFinder(read)):
            printf("ERR!!\n");
            break;
        default:
            printf("BAD REQUEST TO PROCESS!!\n");
            break;
        }
    }
}

int main(int argc , char** argv)
{
    // declaration statements
    FILE  *read,*write;
    

    // opening pointers
    read = fopen("../files/text", "r");
    write = fopen("../files/new","rw");
    
    driver(read,write);
    // closing oprned pointers
    fclose(read);
    fclose(write);

    
    

    // return flag
    exit(EXIT_SUCCESS);
}

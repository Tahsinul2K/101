#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ifp = fopen("file15_input.txt", "r+");
    char line[100];
    while(fgets(line,sizeof(line), ifp) != NULL)
    {
        if(strncmp(line,"Zarif",5) == 0) //Zarif 88\r\n
        {   printf("%d",ftell(ifp));
            fseek(ifp,ftell(ifp)-strlen(line)-1,SEEK_SET); //You're seeing 10 from ftell(ifp) because ftell() gives the position of the next character to be read — not the index of the last character read
            fprintf(ifp, "Zarif 99\n");
            break;
        }
    }
    fclose(ifp);
}
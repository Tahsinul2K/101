#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() // 4 ta number thakbe tar copy kore pashe sum dibe
{
    FILE* ifp = fopen("mytext.txt","r");
    FILE* ofp = fopen("yourtext.txt", "w");

    char line[100];
    while(fgets(line, sizeof(line), ifp) != NULL)
    {   
        int n[4];
        sscanf(line,"%d %d %d %d",&n[0],&n[1],&n[2],&n[3]);
        int sum =0;
        for(int i = 0 ; i<4 ; i++)
        {
            sum+= n[i];
        }
        sprintf(line,"%d %d %d %d %d\n",n[0],n[1],n[2],n[3],sum);
        fputs(line, ofp);
    }
    fclose(ifp);
    fclose(ofp);
}
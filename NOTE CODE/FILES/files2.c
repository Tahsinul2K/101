#include<stdio.h>
int main()
{
    FILE* ifp = fopen("mytext.txt","r");
    FILE* ofp = fopen("yourtext.txt", "w");
    int n[4];
    while(fscanf(ifp, "%d %d %d %d",&n[0],&n[1],&n[2],&n[3]) == 4)
    {
        fprintf(ofp , "%d %d %d %d\n", n[0], n[1], n[2], n[3]);
    }
}
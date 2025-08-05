#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() // Roll, Math mark, Physics mark, Eng mark, printf the roll who got highest total;
{
    FILE* ifp = fopen("file8_input.txt", "r");
    FILE* ofp = fopen("file8_output.txt", "w");

    int id_max, phy, math, eng, max_total,id;
    fscanf(ifp, "%d %d %d %d", &id_max, &math, &phy, &eng);
    max_total = phy+math+eng;

    while(fscanf(ifp, "%d %d %d %d", &id, &math, &phy, &eng) == 4)
    {
        int sum = math+phy+eng;
        if(sum>max_total)
        {
            max_total = sum;
            id_max = id;
        }
    }
    fprintf(ofp, "%d", id_max);
    fclose(ifp);
    fclose(ofp);
}
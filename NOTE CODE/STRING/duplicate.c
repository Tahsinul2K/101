#include <stdio.h> //22 - 23 3.a
int main()
{   
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    int element_num = 0, skip = 0;
    int k = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                for (k = 0; k < element_num; k++)
                {
                    if (arr2[k] == arr1[i])
                    {
                        skip = 1;
                    }
                }
                if (!skip)
                {
                    arr2[k] = arr1[i];
                    element_num ++;
                }
            }
        }
        skip = 0;
    }
    for(int i = 0 ; i<element_num ; i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
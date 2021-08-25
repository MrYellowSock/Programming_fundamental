#include <stdio.h>
#include <stdbool.h>
int n,interested;
main()
{
    scanf("%d",&n);

    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&interested);


    bool found = false;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == interested)
        {
            printf("%d ",i+1);
            found = true;
        }
    }

    if(!found)
    {
        printf("0");
    }
}

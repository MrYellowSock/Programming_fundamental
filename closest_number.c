#include <stdio.h>
#include <stdlib.h>

int howclose = 2100000000, targ;
int num;
main()
{
    scanf("%d",&targ);

    int now;
    for(int j = 0;j<8;j++)
    {
        scanf("%d",&now);
        if(abs(targ-now)  < howclose)
        {
            howclose = abs(targ-now);
            num = now;    
        }

    }

    printf("%d",num);
}
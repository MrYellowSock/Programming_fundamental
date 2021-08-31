#include <stdio.h>
#define h2o 250
#define sugar 15
main()
{
	int water;
	int sug ;
	for(int i = 0;i<7;i++)
	{
		scanf("%d %d",&water,&sug);
		int sug_count = sug / sugar;
		int water_count = water/h2o;

		int diff = water_count- sug_count;

		if(diff > 0)
		{
			 water_count -= diff;
		}

		int leftover = water-h2o*water_count;
		
		printf("%d",water_count);
		if(leftover > 0)
		{
			printf(" water");
		}
		printf("\n");
	}
}

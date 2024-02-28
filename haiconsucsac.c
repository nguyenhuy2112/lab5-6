#include<stdio.h>
#include<math.h>
#include<time.h>
int intRandom(int min, int max)
{
    return min + rand() % (max - min + 1); 
}
int main()
{
	int x;
	int y;
	int total;
	int count;	
	do
	{
	printf("total:  ");
	scanf("%d", &total);	
	}
	while (total < 2 || total > 12);
	count = 1;
	do
	{
		x = intRandom(1,6);
		y = intRandom(1,6);
		printf("result 2 throw is %d:  %d, %d\n", count, x, y);
		count++;	
	}
	while( total != x + y);
}

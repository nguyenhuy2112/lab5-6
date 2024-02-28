#include<stdio.h>
#include<math.h>
#include<time.h>
int intRandom(int min, int max)
{
	return  min + rand() % (max - min + 1);
}
int main()
{
	int ball1;
	int ball2;
	int total;
	int count;
	do 
	{
		printf("enter tolal:  ");
		scanf("%d", &total);
		

	}while(total < 2 || total >20);
	count = 1;
	do 
	{
		ball1 = intRandom(1,10);
		ball2 = intRandom(1,10);
		printf("result 2 ball %d:  %d, %d\n", count, ball1, ball2);
		count++;
		
	}while(total != ball1 + ball2);

	
	
	
}
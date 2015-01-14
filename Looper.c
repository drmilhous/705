#include <stdio.h>
#include <stdlib.h>
int printer(int size)
{
  	int x = 10;
	for(int i = 0; i < size; i++)
	{
		for(int j = i; j < size; j++)
		{
			if(x + j > 10000)
			{
				x = 0;
			}
			x += j;
		}
	}
	return x;
}


int main()
{
	int temp;
	scanf("%d", &temp);
	temp = printer(temp);
	printf("The result is %d", temp);
}


#include <stdio.h>
#include <stdlib.h>
int printer(int size) // n^2
{
	//size = n
  	int x = 10;// 1
	// 1 (i = 0)
	// 1 + 2n + 
	for(int i = 0; i < size; i++) // 1/2 n(n+1) = n^2/2 + n/2
		// (3 + 5 * (n + n-1 + n-2...) ) * n = 3n + 5*n*(n-1 + n-2 +...)
		// = 3n + 5* 1/2 n(n+1)
		// = 3n + 5/2 n^2 + 5/2n
	{
		// 2
		// 1 (j = i) 
		for(int j = i; j < size; j++) //100 + 99 +98 +  
		{
			// 2 (test & inc)
			// if = 2
			if(x + j > 10000)//1
			{
				x = 0; //1
			}
			x += j;//1
			// sum = 5
		}// 5 * n + 5 * n-1 + 5 * n-2 == (3 + 5 * (n + n-1 + n-2...) ) * n
	}
	return x;//1
	
	
	//	= 3n + 5/2 n^2 + 5/2n + 3
}


int main()
{
	int temp;
	scanf("%d", &temp);
	temp = printer(temp);
	printf("The result is %d", temp);
}


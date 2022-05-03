#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int walks(int walker)
{
	int temp,i;
	
		temp = rand()%2;
		
		if(temp == 0)
		{
			walker--;	
		}
		else if(temp == 1)
		{
			walker++;
		}
	
	return walker;
}

int main() {
	srand(time(0));
	int i,walker,temp,walker2;
	
	walker = 500; // arxiki thesi
	walker2 = 500;
	
	for(i = 0; i <= 1000; i++)
	{
	walker = walks(walker); 
	walker2 = walks(walker2);
		printf("gia 1000 ripseis = %d,%d\n",walker,walker2);

	}

    
	return 0;
}

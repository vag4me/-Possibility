#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int walks(int walker,int size)
{
	int temp,i;
	
	for(i = 0; i < size; i++) 
	{
		temp = rand()%2;
		
		if(temp == 0)
		{
			walker--;	
		}
		else if(temp == 1)
		{
			walker++;
		}
	}
	return walker;
}

int main() {
	srand(time(0));
	int i,walker,temp;
	
	walker = 500; // arxiki thesi
	
	walker = walks(walker,10); // gia 10 ripseis 
	printf("gia 10 ripseis = %d\n",walker);
	walker = 500; // arxki thesi
	
	walker = walks(walker,50); // gia 50 ripseis
	printf("gia 50 ripseis = %d\n",walker);
	walker = 500; // arxiki thesi
	
	walker = walks(walker,100); // gia 100 ripseis
	printf("gia 100 ripseis = %d\n",walker);
	walker = 500; // arxiki thesi
	
	return 0;
}

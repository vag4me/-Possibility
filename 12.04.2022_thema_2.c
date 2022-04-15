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
	FILE *fp;
	srand(time(0));
	int i,walker,temp;
	
	fp = fopen("store.txt","w");
	if(fp == NULL)
	{
		printf("error file not found\n");
		exit(1);
	}
	

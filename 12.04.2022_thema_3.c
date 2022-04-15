#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
{
	int coin;
	coin = 1 + rand()%10;
		if( coin <= 7)
		{
			return 1;
		}
		else
		{
			return 0;
		}

}

int walks(int walker,int size)
{
	int temp,i;
	
	for(i = 0; i < size; i++) 
	{
		temp = random();
		
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
	
	walker = 500; // arxiki thesi
	
	for(i = 0; i < 1000; i++)
	{
		walker = walks(walker,10); // gia 10 ripseis 
		printf("gia 10 ripseis = %d\n",walker);
		fprintf(fp,"%d\n",walker);
		walker = 500; // arxki thesi
	
		walker = walks(walker,50); // gia 50 ripseis
		printf("gia 50 ripseis = %d\n",walker);
		fprintf(fp,"%d\n",walker);
		walker = 500; // arxiki thesi
	
		walker = walks(walker,100); // gia 100 ripseis
		printf("gia 100 ripseis = %d\n",walker);
		fprintf(fp,"%d\n",walker);
		walker = 500; // arxiki thesi
		printf("\n");
	}
	
	fclose(fp);
	return 0;
}

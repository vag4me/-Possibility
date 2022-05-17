#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ar1[1000],i,ar2[1000],ar3[1000];


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
	ar1[walker] = ar1[walker] + 1;
	return walker;
}

int main() {
	FILE *fp;
	srand(time(0));
	int i,walker,temp;
	
	fp = fopen("store1.txt","w");
	if(fp == NULL)
	{
		printf("error file not found\n");
		exit(1);
	}
	
	walker = 500; // arxiki thesi
	
	for(i = 0; i < 1000; i++)
	{
		ar1[i] = 0;
	}
	
	for(i = 0; i < 1000; i++)
	{
		walker = walks(walker,10);
	}
	
	for(i=0;i<1000;i++)
	{
		printf("%d",ar1[i]);
		fprintf(fp,"%d\n",ar1[i]);
	}
	
	// 2
	fprintf(fp,"\n\n\n");
	
		for(i = 0; i < 1000; i++)
	{
		ar1[i] = 0;
	}
	
	for(i = 0; i < 1000; i++)
	{
		walker = walks(walker,50);
	}
	
	for(i=0;i<1000;i++)
	{
		printf("%d",ar1[i]);
		fprintf(fp,"%d\n",ar1[i]);
	}
	
	// 3
	
	fprintf(fp,"\n\n\n");
	
		for(i = 0; i < 1000; i++)
	{
		ar1[i] = 0;
	}
	
	for(i = 0; i < 1000; i++)
	{
		walker = walks(walker,100);
	}
	
	for(i=0;i<1000;i++)
	{
		printf("%d",ar1[i]);
		fprintf(fp,"%d\n",ar1[i]);
	}
	
	//4
	
	fprintf(fp,"\n\n\n");
	
		for(i = 0; i < 1000; i++)
	{
		ar1[i] = 0;
	}
	
	for(i = 0; i < 1000; i++)
	{
		walker = walks(walker,500);
	}
	
	for(i=0;i<1000;i++)
	{
		printf("%d",ar1[i]);
		fprintf(fp,"%d\n",ar1[i]);
	}
	
	// 5
	
	fprintf(fp,"\n\n\n");
	
		for(i = 0; i < 1000; i++)
	{
		ar1[i] = 0;
	}
	
	for(i = 0; i < 1000; i++)
	{
		walker = walks(walker,1000);
	}
	
	for(i=0;i<1000;i++)
	{
		printf("%d",ar1[i]);
		fprintf(fp,"%d\n",ar1[i]);
	}
	
	fclose(fp);
	return 0;
}

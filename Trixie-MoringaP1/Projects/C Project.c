#include<stdio.h>
#include<string.h>
void main()
{
	FILE *pread;
	FILE *pwrite;
	pwrite=fopen("Customer structure","a");
	if(pwrite==NULL)
	{
	printf("File did not open\n");
	}
	else
	{
	char fname[20];
	char TOC[20];
	char address[20];
	int  purchase[7];
	int Tpurchases;
	printf("Enter the number of customers to enter their details \n");
	int customers;
	scanf("%d",&customers);
	int i;
	for(i=0;i<customers;i++)
	{
		printf("Name:\n");
		scanf("%s",fname);
		printf("type of customer:\n");
		scanf("%s",TOC);
		printf("address:\n");
		scanf("%s",address);
	    printf("amount of purchase7days:");
		scanf("%d",&purchase);
		printf("total week purchases:");
		scanf("%d",&Tpurchases);
		fprintf(pwrite,"%s\t %s\t %s\t %d\t %d\n",fname,TOC,address,purchase,Tpurchases);
	
	}
}

fclose(pwrite);

pread=fopen("Customer structure","r");
if(pread==NULL)
{
	printf("The file cannot be opened\n");
}
else
{
	char fname[20];
	char TOC[20];
	char address[20];
	int purchase;
	int Tpurchases;
	while(!feof(pread))
	{
		fscanf(pread,"%s %s %s %d %d,fname,TOC,address,&purchase,&Tpurchases");
		printf("%s\t %s\t %s\t %d\t %d\n,fname,TOC,address,purchase,Tpurchases");
	}
}
}

	

#include<stdio.h>
#include<conio.h>
int noofprocess,noofblock;
int blocksize[10],processsize[10],blocknumber[10];

void firstfit()
{
	int i,j;
	printf("\n********First Fit********");
	printf("\n\nProcess Psize Allocated\tblock");
	for(i=0;i<noofprocess;i++)
	{
		int flag=0;
		for(j=0;j<noofblock;j++)
		{
			if(processsize[i]<=blocksize[j])
			{
				printf("\n\nP%d\t%d\tH%d",i,processsize[i],j);
				flag=1;
				blocksize[j]-=processsize[i];
				break;
			}
		}
		if(flag==0)
		{
			printf("\n\nP%d\t%d\tNot allocated",i,processsize[i]);
		}
	}
}

void bestfit()
{
	int i,j;
	int temp;
	for(i=0;i<noofblock-1;i++)
	{
		for(j=i+1;j<noofblock;j++)
		{
			if(blocksize[i]>blocksize[j])
			{
				//blocks are sorted
				temp=blocksize[i];
				blocksize[i]=blocksize[j];
				blocksize[j]=temp;
				//block number is sorted according to the size
				temp=blocknumber[i];
				blocknumber[i]=blocknumber[j];
				blocknumber[j]=temp;
			}
		}
	}
	printf("\n********Best Fit********\n\n");
	printf("\nProcess Psize Allocated\tblock");
	for(i=0;i<noofprocess;i++)
	{
		int flag=0;
		for(j=0;j<noofblock;j++)
		{
			if(processsize[i]<=blocksize[j])
			{
				printf("\n\nP%d\t%d\tH%d",i,processsize[i],blocknumber[j]);
				flag=1;
				blocksize[j]-=processsize[i];
				break;
			}
		}
		if(flag==0)
			printf("\n\nP%d\t%d\tNot allocated",i,processsize[i]);
	}
}


void worstfit()
{
    int i,j,count=0;
    int temp[10];
    for(int k=0;k<noofprocess;k++)
        temp[k]=-1; 
        
    for(i=0;i<noofprocess;i++)
    {   
        int diff=0;
        for(j=0;j<noofblock;j++)
        {
            if(processsize[i] <= blocksize[j] & blocksize[j]!=0 && (blocksize[j]-processsize[i])>diff)
            {
                diff = blocksize[j]-processsize[i]; //max diff. of block    
                count=j;
            }
        }
        if(diff!=0)
        {
            blocksize[count]-=processsize[i];                  
            temp[i]=count;  //assigning the block no.
        }                                                       
    }   
    printf("\n********worst Fit********\n\n");
	printf("\nProcess Psize Allocated\tblock");
    for(i=0;i<noofprocess;i++)
    {
        printf("\nP%d\t%d\t",i+1,processsize[i]);
        if(temp[i]!= -1)
            printf("H%d",temp[i]+1);
        else
            printf( "Not Allocated");
           
    }
}

void main()
{
	int i,j;
	int ch;

	printf("*********| Memory Allocation |*********");
	printf("\n\nEnter the number of the memory blocks: ");
	scanf("%d",&noofblock);
	printf("\nEnter the size of each block: \n\n");
	for(i=0;i<noofblock;i++)
	{
		printf("Block %d: ",i);
		scanf("%d",&blocksize[i]);
		blocknumber[i]=i;
	}
	printf("\nEnter the number of process: ");
	scanf("%d",&noofprocess);
	printf("\nEnter the size of each process:\n\n");
	for(i=0;i<noofprocess;i++)
	{
		printf("Process %d: ",i);
		scanf("%d",&processsize[i]);
	}
	
	printf("\nMenu for allocation:\n");
	printf("\n1.First Fit \n2.Best Fit \n3.Worst Fit");
	printf("\n\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			firstfit();
			break;
		case 2:
			bestfit();
			break;
		case 3:
			worstfit();
			break;
		default:
			printf("Wrong choice!!");
	}
}


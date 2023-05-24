#include <stdio.h>  
int main()
{  
       FILE *fptr=NULL;  
       char writeStr[25]; 
       
	//Writing into the file 
	fptr = fopen("sample.txt", "w"); //opening a file in write mode	
	if(fptr==NULL)
	{	
		printf("Unable to open the file");
		return 0;
	}
	else
	{
		for(int i=0;i<=25;i++)
		{
			for(int j=0;j<=25-i;j++)
			{
				fprintf(fptr,"* ");//Writing into the file using fprintf() function
				
			}
			fprintf(fptr,"\n");
		}
	}
	fclose(fptr);//closing the file
	
	//redaing the file
	fptr = fopen("sample.txt", "r"); //opening a file in read mode

	fscanf(fptr,"%s",writeStr);//reading the file contant using fscanf()function

		for(int i=0;i<=25;i++)
		{
			for(int j=0;j<=25-i;j++)
			{
				printf("%s ",writeStr);//Writing into the file using fprintf() function
				
			}
			printf("\n");
		}
	fclose(fptr);

	return 0;
}  

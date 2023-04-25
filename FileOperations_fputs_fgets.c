#include<stdio.h>
#include<string.h>


int main()
{

	FILE *fptr = fopen("sample.txt","w");//creating and opening a file ina write mode
	char writeStr[] = "Program to illistrate fputs() and fgets() function",receiveStr[50];
	int i=0;

	if(fptr==NULL)
	{
		printf("Failed to open the file");
		return 0;
	}
	else
	{
			fputs(writeStr,fptr);//writing String to the file using fputs() function
	}


	fclose(fptr);
	
	
	fptr = fopen("sample.txt","r");

		do{
		
			if(feof(fptr))
			{
				break;	
			}
			else
			{
				fgets(receiveStr,50,fptr);//Reading each characters from the file using fgetc() function
				printf("%s",receiveStr);
						
			}
		}while(1);
		
		printf("\n");
	
	fclose(fptr);
	return 0;
}





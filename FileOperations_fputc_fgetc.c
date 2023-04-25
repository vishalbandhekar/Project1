#include<stdio.h>
#include<string.h>

int main()
{

	FILE *fptr = fopen("sample.txt","w");//creating and opening a file in a write mode
	char writeStr[] = "Program to illistrate fputc() and fgetc() function";
	int i=0;

	if(fptr==NULL)
	{
		printf("Failed to open the file");
		return 0;
	}
	else
	{
		for(i=0;writeStr[i]!='\0';i++)
		{
			fputc(writeStr[i],fptr);//writing each characters to the file using fputc() function
		}
	}
	fclose(fptr);
	
	
	fptr = fopen("sample.txt","r");

		while(1){
		
			if(feof(fptr))
			{
				break;	
			}
			else
			{
				printf("%c",getc(fptr));//Reading each characters from the file using fgetc() function
						
			}
		}
		printf("\n");
	
	fclose(fptr);
	return 0;
}



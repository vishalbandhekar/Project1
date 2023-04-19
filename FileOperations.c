#include<stdio.h>
#include<string.h>

int main()
{

	FILE *fptr = fopen("sample.txt","w");//creating and opening a file ina write mode
	char writeStr[] = "Hello Good Morning!! have a good Day!";
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
			fputc(writeStr[i],fptr);//writing each characters to the file using fputc function
		}
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
				printf("%c",getc(fptr));//Reading each characters from the file using fgetc() function
						
			}
		}while(1);
		printf("\n");
	
	fclose(fptr);
	return 0;
}


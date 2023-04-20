#include<stdio.h>

int main()
{
	FILE *fptr=NULL;//file pointer

	//Writing into the file 
	fptr = fopen("sample.txt", "w"); //Opening a file in write mode	
	

	char cstr[] = "fseek() is used to move file pointer associated with a given file to a specific position";

	if(fptr==NULL)
	{	
		printf("Unable to open the file");
		return 0;
	}
	else
	{
				fprintf(fptr,cstr);//Writing into the file using fprintf() function

	}
		//file pointer’s current position.
		fseek(fptr, 10, SEEK_CUR);
		printf("%ld\n",ftell(fptr));
		
		//starting of the file
		fseek(fptr, 15, SEEK_SET);
		printf("%ld\n",ftell(fptr));

		//end of the file
		fseek(fptr, 0, SEEK_END);
		printf("%ld\n",ftell(fptr));
		//vishal Bandhekar
	fclose(fptr);
	
return 0;
}

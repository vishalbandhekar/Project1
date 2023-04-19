#include<stdio.h>
#include<string.h>


struct str{
char company[15];
char type[15];
char appname[15];
char *string1;
char *string2;
};

int main()
{
	struct str obj;
 	strcpy(obj.company,"Oracle");//strcpy function used to add the string to the struct element
	strcpy(obj.type,"VM");
	strcpy(obj.appname,"VirtualBox");

	printf("Company:%s\nType:%s\nApplicaiton Name:%s\n",obj.company,obj.type,obj.appname);
	
	//finding the length of the strings using strlen function
	printf("length of the Strings: %ld, %ld, %ld\n",strlen(obj.company),strlen(obj.type),strlen(obj.appname));

	//comparing strings using strcmp function
	printf("Comparing Strings using strcmp(): %d, %d, %d\n",strcmp(obj.company,obj.type),strcmp(obj.type,obj.appname),strcmp(obj.appname,obj.company));	
	
	//comparing strings using strncmp function
	printf("Comparing Strings using strncmp(): %d, %d, %d\n",strncmp(obj.company,obj.type,5),strncmp(obj.type,obj.appname,5),strncmp(obj.appname,obj.company,5));
	
	struct str obj1;
	obj1.string1 = "MacroUnit";
	obj1.string2 = "Macro";
	char *ptr;
 
	ptr = strstr(obj1.string1, obj1.string2);	
	printf("%s\n",ptr);

	struct str obj2;
	strcpy(obj2.company,"Macro");
	strcpy(obj2.appname,"Unit");
	
 
	strncpy(obj2.company, obj2.appname, 3);
	printf("string copied using strncpy function: %s\n",obj2.company);

	struct str obj3;
	strcpy(obj3.company,"Uni");
	strcpy(obj3.appname,"corn");
	
	printf("After concating the strings obj3.company and obj3.appname : %s\n",strcat(obj3.company,obj3.appname));

 	return 0;
}


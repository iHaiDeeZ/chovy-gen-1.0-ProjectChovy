#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>   
int main ()
{
	char Aid2[19]="0x";
	char Aid[17];
	char buf[100];
	HANDLE  hConsole;
    int k=10;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 
    SetConsoleTextAttribute(hConsole, k);
  printf ("***Welcome to chovy-gen by @dots_tb and Motoharu***\n\n");
	k=15;
SetConsoleTextAttribute(hConsole, k);
  printf("This file is used to verify EBOOT.pbp files on the Vita to prevent tampering and is also used for version checking \n\nTo generate a __sce_ebootpbp, you must have obtained your AID. One method of obtaining your AID is to copy it from an existing __sce_ebootpbp at offset 0x40 to 0x48 from a hex editor.\n\n");
  printf("\n\n***This Tool made by ");
  	 k=4;
  	SetConsoleTextAttribute(hConsole, k);
  
  printf("ShiroKlein");
  	k=15;
SetConsoleTextAttribute(hConsole, k);
   printf(" ***\n\n\n");
  		 k=13;
  	SetConsoleTextAttribute(hConsole, k);
    printf("Enter your Aid without 0x :>\n");
    	 k=15;
  	SetConsoleTextAttribute(hConsole, k);
	gets(Aid);
	
if((strlen(Aid))==16){
	strcat(Aid2,Aid);
		 k=14;
  	SetConsoleTextAttribute(hConsole, k);
  	strupr (Aid2);
	printf("Your AID is %s\n",Aid2);
	snprintf(buf, sizeof(buf), "chovy-gen.exe  %s EBOOT.pbp ",Aid2);      

	system(buf);
	getchar();
	}

else{
		 k=4;
  	SetConsoleTextAttribute(hConsole, k);
	printf("The number of characters is insufficient to be an AiD");
	getchar();
	 return 0;

}
 
}

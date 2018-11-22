#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	
    FILE *fp;
    //char input[100];
    char input;
    
    fp = fopen("sample.txt","r");   
    
    //printf("%i\n", fp); 
    
    while( (input = fgetc(fp)) != EOF)
    //while ( fgets(input, 100, fp) !=NULL )
    {
    	putchar(input);
    	//printf(input);
    }
    
    fclose(fp);
    
	return 0;
}

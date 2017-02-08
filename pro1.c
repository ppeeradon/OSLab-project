#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
char c[100];
char *split;
char exit = "q";

main:
fgets(c,50,stdin);
//printf("Output = %s",c);
split = strtok(c, " ");
if(strcmp(split,exit) == 0)
	{
		printf("testexit");
		return 0;
	}
printf("\n----------------------------------------------------------\n");
	while(split != NULL)
	{
		printf("INPUT : %s", split);
		printf("\n----------------------------------------------------------\n");
		split = strtok(NULL," ");
	}
	//goto main;
}

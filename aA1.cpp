#include<stdio.h>
#include<ctype.h>
int main()
{
    int ctr = 0 ;
    char str_char;
    char str[100];
    fgets(str, sizeof str,stdin);
    while(str[ctr]){
    	str_char=str[ctr];
    	putchar(toupper(str_char));
    	ctr++;
	}
    return 0;
}

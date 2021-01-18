#include <stdio.h>
#include <string.h>

int main(){
    //pointer array method of string declaration
    char * pointerstring = "hello world";
    printf("%s\n",pointerstring);
    //local array string declaration method 
    char exstring[] = "hello world";
    printf ("%s\n", exstring);
    
    //string length function
    char * stringlengthex = "hello world";
    printf("%d\n",strlen(stringlengthex));
    return 0;
}


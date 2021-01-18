#include <stdio.h>

int main(){
    int a = 1;
    int * pointertoa = &a;
    printf("pointer to a => %d regular var a => %d\n", *pointertoa,a);
    return 0;
}


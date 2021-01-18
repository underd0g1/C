#include <stdio.h>

//non void function
int nonvoidfunction(int i){
    return i + 2;
}

//void function example 
void voidfunction(int i){
    printf("I cant return anything apparently, but here is i: %d\n", i);
}

int main(){
    voidfunction(10);
    printf("%d ",nonvoidfunction(10));
    return 0;
}


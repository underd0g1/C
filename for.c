#include <stdio.h>


void sumarr(){
    int i;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for (i=0;i<10;i++){
        sum += array[i];
    }
    printf("%d\n",sum);
}

        

int main(){
    int i;
    for( i = 0; i < 10; i++){
        printf("%d\n", i);
}
    sumarr();
return 0;
} 


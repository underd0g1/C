#include <stdio.h>

int main(){
int grades[2][5] = {
    {60,50,78,69,50},
    {30,90,100,45,78}
};
 int highest = grades[1][2];
 printf("the highest grade was %d\n", highest);
 return 0;
}


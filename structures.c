#include <stdio.h>


//basic use of a stucture
//    struct point {
//        int x;
//        int y;
//}

//typedef stucture example

    typedef struct {
        char * name;
        int age;
    } person;

int main(){
     person john;
     john.name = "John";
     john.age = 27;

    printf("%s is %d years old.", john.name, john.age);
}
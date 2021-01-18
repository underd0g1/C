#include <stdio.h>

int main(){
    char vowels[1][5] = {
        {'a','e','i','o','u'}
    };
    char letter = vowels[0][2];
    printf("%c", letter);
    return 0;
}


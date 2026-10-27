

#include <stdio.h>


int counter = 10;

// we can do that with macro 
int add(int a, int b){
    return a + b;
}

int main(void){
    int value = 5;
    int res = add(value, counter);
    printf("RESULT = %d\n", res);
    return 0;
}
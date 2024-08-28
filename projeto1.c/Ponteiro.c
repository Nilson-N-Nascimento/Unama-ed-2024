#include <stdio.h>

int main() {

    int i = 5;
    int *j = &i;
    i = i+1;

    printf("i: %p\n", &i);
    printf("j: %p\n", j);

    return 0;




}
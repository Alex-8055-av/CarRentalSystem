#include <stdio.h>

int s() {
    int a = 9, b = 4;
    return a + b;  
}

int main() {
    double c = 2;
    int result = s();  

    printf("%d   %d\n", c* result);  
    return 0;
}

#include <stdio.h>

int main() {
    int a[10], i, j, x = 4;
    int total = 0;
    for(i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 4; j++) {
            if(a[i] + a[j] == x) {
            	printf("(%d,%d)",a[i],a[j]);
                total++;
               
        }
    }
   // printf("%d", total);
 //   return 0;
} }

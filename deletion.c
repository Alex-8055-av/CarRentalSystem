#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7};
    int i, j;
    int s = 7;

    printf("The array elements are:\n");
    for(i = 0; i < s; i++)
        printf("%d %d\n", i, a[i]);

    printf("Enter the index to delete: ");
    scanf("%d", &j);
    

    for(i = j; i < s - 1; i++)
        a[i] = a[i + 1];

    s--;

    printf("New array values after deletion:\n");
    for(i = 0; i < s; i++)
        printf("%d %d\n", i, a[i]);

    return 0;
}
 

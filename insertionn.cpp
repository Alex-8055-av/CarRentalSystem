#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7};
    int i, j, n;
    int s = 7;

    printf("The array elements are:\n");
    for(i = 0; i < s; i++)
        printf("%d %d\n", i, a[i]);


    printf("Enter the new element: ");
    scanf("%d", &n);
    printf("Enter the index: ");
    scanf("%d", &j);

    for(i = s - 1; i >= j; i--)
        a[i + 1] = a[i];

    a[j] = n;
    s++;

    printf("New array values:\n");
    for(i = 0; i < s; i++)
        printf("%d %d\n", i, a[i]);

    return 0;
}

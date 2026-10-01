#include <stdio.h>
int main() {
    int a[9], index, new_value, i;
    printf("Enter 8 elements:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter the index (0 to 7) of the element you want to replace:\n");
    scanf("%d", &index);
    printf("Enter the new value:\n");
    scanf("%d", &new_value);

    a[index] = new_value;
    printf("Updated array:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

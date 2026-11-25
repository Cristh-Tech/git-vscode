#include <stdio.h>
int main() {

    int num;
    int i, first = 0, second = 1, next;

    printf("\nEnter number: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
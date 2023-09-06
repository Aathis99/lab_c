#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

     printf("Odd numbers of the first %d terms are:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1); // คำนวณและแสดงเลขคี่ตามลำดับ
    }

    printf("\n");

    return 0;
}

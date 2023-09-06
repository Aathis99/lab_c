#include <stdio.h>

int main() {
    int base, exponent;
    
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%ld", &exponent);
    
    int i =0;
    int result =1;
    for (i;i<exponent; i++ ){
        result = result * base;
    }
    
    printf ("The power of nubber =%d",result);
    
    return 0;
}

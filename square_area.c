//square area funtion caluate
#include <stdio.h>

float squararea(float side){
    return side * side;
}

void main(){
    float side, area;
    // side = 5.25;
    
    printf("Enter side : ");
    scanf("%f",&side);
    
    area = squararea(side);
    printf("square area is %.2f",area);
}
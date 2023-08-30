#include <stdio.h>
int feet2inch (int);
int feet , inches; 
void main ()
{
    /* code */
    feet = 6;
    inches = feet2inch(feet);
    printf("Height in inches is \n %d ",inches);  
    

}
int feet2inch (int f)
{
    return f*12;
}

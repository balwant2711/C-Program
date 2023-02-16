#include<stdio.h> 
#include<conio.h> 
#include<math.h>  
  
void main()  
{  
    float degree, radian;  
    printf("Enter angle in degree\n");  
    scanf("%f", &degree);  
    radian = degree * (3.14 / 180.0);  
  
    printf("Sin(%f) = %f\n", degree, sin(radian));  
    printf("Cos(%f) = %f\n", degree, cos(radian));  
    printf("Tan(%f) = %f\n", degree, tan(radian));  
    printf("Cosec(%f) = %f\n",degree, 1/sin(radian));  
    printf("Sec(%f) = %f\n", degree, 1/cos(radian));  
    printf("Cot(%f) = %f\n", degree, 1/tan(radian));  
  
    getch();  
  
    
}
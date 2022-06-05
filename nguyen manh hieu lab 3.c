//
//  main.c
//  nguyen manh hieu bai 3
//
//  Created by Hiếu Hee on 04/06/2022.
//

#include <stdio.h>
int main(void)
{
    float num1;
    float num2;
    printf("Nhap so num1 = ");
    scanf("%f", &num1);
    printf("Nhap so num2= ");
    scanf("%f", &num2);
    printf("tong: %.0f\n", num1+num2);
    printf("hieu: %.0f\n", num1-num2);
    printf("tich: %.0f\n", num1*num2);
    printf("thuong: %f\n", num1/num2);
    
    
    return 0;
}

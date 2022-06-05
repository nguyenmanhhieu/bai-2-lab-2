//
//  main.c
//  nguyen manh hieu bai 5
//
//  Created by Hiếu Hee on 04/06/2022.
//

#include <stdio.h>

int main()
{
    float a;
    float b;
    float h;
    float S;
    // insert code here...
    printf("nhap so a\n");
    scanf("%f",&a);
    printf("nhap so b\n");
    scanf("%f",&b);
    printf("nhap so h\n");
    scanf("%f",&h);
    S=(((a+b)/2)*h);
    printf("S is %f\n",S);
    return 0;
}

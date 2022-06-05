//
//  main.c
//  bai 8 nguyen manh hieu
//
//  Created by Hiếu Hee on 05/06/2022.
//

#include<stdio.h>
  
int main()
{
    printf("Kieu int: %d byte\n", sizeof(int));
    printf("so nguyen: %d\n",15);
    printf("\n");
    printf("kieu float: %f byte\n", sizeof(float));
    printf("so thuc kieu float: %f\n",3.456000);
    printf("\n");
    printf("kieu double: %d\n", sizeof(double));
    printf("so thuc kieu double: %f\n",3.456000);
    printf("\n");
    printf("kieu double: %d\n", sizeof(char));
    printf("ky tu: %c\n",'E');
    printf("\n");
    printf("kieu long int: %d\n", sizeof(long int));
    printf("\n");
    printf("kieu long double: %d\n", sizeof(long double));
    
    
    
   return (0);
}

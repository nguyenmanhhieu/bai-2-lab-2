//
//  main.c
//  nguyen manh hieu bai 6
//
//  Created by Hiếu Hee on 05/06/2022.
//

#include <stdio.h>

int main()
{
    float toan;
    float ly;
    float hoa;
    float tong;
    float tb;
    // insert code here...
    printf("nhap diem toan\n");
    scanf("%f",&toan);
    printf("nhap diem ly\n");
    scanf("%f",&ly);
    printf("nhap diem hoa\n");
    scanf("%f",&hoa);
    tong=toan+ly+hoa;
    tb=(toan+ly+hoa)/3;
    printf("tong diem la %f\n",tong);
    if (tong>12)
    printf("ban da qua mon \n");
    else
    printf("ban da tach mon \n");
    printf("trung binh la %f\n",tb);
    if (tb>5)
    printf("ban da qua mon \n");
    else
    printf("ban da tach mon \n");
    return 0;
}

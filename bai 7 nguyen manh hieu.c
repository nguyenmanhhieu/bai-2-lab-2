//
//  main.c
//  bai 7 nguyen manh hieu
//
//  Created by Hiếu Hee on 05/06/2022.
//

#include <stdio.h>

int main()
{
    int R;
    int St;
    int a;
    int b;
    int Sv;
    int Shcn;
    // insert code here...
    printf("tinh dien tich hinh tron\n");
    printf("buoc 1 nhap ban kinh\n");
    printf("nhap ban kinh R\n");
    scanf("%d",&R);
    St=3.14*(R*R);
    printf("dien tich hinh tron la %d\n",St);
    printf("tinh dien tich hinh vuong\n");
    printf("buoc 1 nhap canh a\n");
    printf("nhap canh a\n");
    scanf("%d",&a);
    Sv=a*a;
    printf("dien tich hinh vuong la %d\n",Sv);
    printf("tinh dien tich hinh chu nhat la\n");
    printf("buoc 1 nhap canh a va b\n");
    printf("nhap canh a\n");
    scanf("%d",&a);
    printf("nhap canh b\n");
    scanf("%d",&b);
    Shcn=a*b;
    printf("dien tich hinh chu nhat la %d\n",Shcn);
    return 0;
}

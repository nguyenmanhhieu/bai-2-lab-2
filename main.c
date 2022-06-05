//
//  main.c
//  code lab 2 bai 2
//
//  Created by Hiếu Hee on 05/06/2022.
//

#include <stdio.h>
int main(void)
{
int num = 10;
char ch = 'A';
float f = 25.3;
double d = 25.3;
printf("num = %d\n", num);
printf("ch = %c\n", ch);
printf("f = %.2f\n", f);
printf("d = %f\n", d);
return 0;
}

//nhận xét: - khi khai báo int num thì in kết quả ra sẽ ra dạng số
//          - khi khai báo char ch thì in ra kết quả kí tự
//          - khi khai báo float f thì in ra kết quả dạng số nhưng khi ở dòng printf ta thêm dấu . và số 2 có
//            nghĩa là hiện phân số thêm 2 lần tức là khi khai báo float f 25.3 và printf thêm .2 sau % thì            sẽ hiện các số sau số 3 tức là 25.30
//          - khi khai báo dạng double d thì nó sẽ hiện phân số sau số 3 5 phân số

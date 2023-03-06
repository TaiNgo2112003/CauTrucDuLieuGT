// BaiTapChuong2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

static int sum = 0;
int TongChan(int n) {
    if (n <= 0) return -1;
    int temp= n % 10;
    if (temp % 2 == 0) sum += temp;
    return TongChan(n - 1);
}
int main()
{
    int n;
    printf("Nhap n vao nhe: ");
    scanf("%d", n);
    printf("Tong Cac So Chan n: %d", TongChan(n));
    system("pause");
    return 0;
}

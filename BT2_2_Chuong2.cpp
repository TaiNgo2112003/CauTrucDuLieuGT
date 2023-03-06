// BT2_2_Chuong2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Tich(int n) {
    if (n <= 1) return 1;
    return n * Tich(n - 1);
}
int main()
{
    int n;
    printf("Nhap n vao day nhe:");
    scanf_s("%d", &n);
    printf("Tich giam dan la: %d", Tich(n));
}

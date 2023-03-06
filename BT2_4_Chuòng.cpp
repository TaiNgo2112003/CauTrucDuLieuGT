// BT2_4_Chuòng.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>





static int sum = 0;
int TongDuong(int a[], int n) {
	if (n <= 0) return -1;
	if (a[n] > 0) sum++;
	return a[n - 1];
}
int main()
{ 
	int a[5] = { 51, -432, 33, -44, 12 };
	printf("Tong Duong: %d", TongDuong(a, 5));
}


// l6.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void total1(int dt[], int n);
void total2(int* pt, int n);

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	total1(a, 5);
	total2(a, 5);

    return 0;
}

void total1(int dt[], int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++) {
		sum = sum + dt[i];
	}
	cout << "合計=" << sum << '\n';
}

void total2(int* pt, int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++) {
		sum = sum + *pt;
		++pt;
	}
	cout << "合計=" << sum << '\n';
}
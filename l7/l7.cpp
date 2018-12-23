// l7.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void disp(int dt[][5], int n);

int main()
{
	int a[3][5] = {
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	disp(a, 3);
    return 0;
}

void disp(int dt[][5], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cout << dt[i][j] << ' ';
		}
		cout << '\n';
	}
}

// l1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
	int a = 1, b = 10, n;

	n = sum(a, b);
	cout << "総和=" << n << '\n';

    return 0;
}

int sum(int x, int y) {
	int i, tmp = 0;
	for (i = x; i <= y; i++) {
		tmp += i;
	}
	return tmp;
}
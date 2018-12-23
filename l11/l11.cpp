// l11.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int& adjust(int& a, int& b);

int main()
{
	int ret, n1 = 100, n2 = 50;
	ret = adjust(n1, n2);
	cout << "ret=" << ret << " n1=" << n1 << " n2=" << n2 << '\n';
    return 0;
}

int& adjust(int&a, int&b) {
	int tmp;
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	return a;
}
// l13.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int& ref() {
	static int rdt = 0;
	return rdt;
}

int* ptr() {
	static int pdt = 0;
	return &pdt;
}

int main()
{
	int n;

	ref() = 123;
	n = ref();
	cout << n << '\n';

	*ptr() = 456;
	n = *ptr();
	cout << n << '\n';

    return 0;
}


// l2.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void func(int a, int b);

int main(){
	func(10, 20);
    return 0;
}

void func(int a, int b) {
	cout << "a=" << a << "b=" << b << '\n';
}

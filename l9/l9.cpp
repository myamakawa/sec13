// l9.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char* toUprStr(char* s);

int main()
{
	char *pp, cc[] = "abcd";

	pp = toUprStr(cc);
	cout << cc << '\n';
	cout << pp << '\n';
    return 0;
}

char* toUprStr(char* s) {
	char* p;
	for (p = s; *p; p++)
		*p = toupper(*p);
	return s;
}
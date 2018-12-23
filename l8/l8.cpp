// l8.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void puts1(const char* pt);
void puts2(const char s[]);
void puts3(string s);

int main()
{
	char cc[] = "cccccc";
	string ss = "ssssss";

	puts1(cc);
	puts1(ss.c_str());
	puts1("literal");

	puts2(cc);
	puts2(ss.c_str());
	puts2("literal");

	puts3(cc);
	puts3(ss);
	puts3("literal");

	return 0;
}

void puts1(const char* p) {
	cout << "puts1:" << p << '\n';
}

void puts2(const char s[]) {
	cout << "puts2:" << s << '\n';
}

void puts3(string s) {
	cout << "puts3:" << s.c_str() << '\n';
}

// ConsoleApplication315.cpp: 定义控制台应用程序的入口点。
//3-15带默认形参值的函数

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int getvolume(int length, int width = 2, int height = 3);

int main()
{
	const int x = 10, y = 12, z = 15;
	cout << "Some box data is ";
	cout << getvolume(x, y, z) << endl;
	cout << "Some box data is ";
	cout << getvolume(x, y) << endl;
	cout << "Some box data is ";
	cout << getvolume(x) << endl;
	return 0;
}

int getvolume(int length, int width/*=2*/, int height/*=3*/) {
	cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
	return length*width*height;
}
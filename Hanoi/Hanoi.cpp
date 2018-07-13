// Hanoi.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <cstdio>

void hannoi(int n, char from, char buffer, char to)
{
	if (n == 0) return;
	hannoi(n - 1, from, to, buffer);
	cout << "移动圆盘" << n << "，从 " << from << " 到 " << to << endl;
	hannoi(n - 1, buffer, from, to);
}

int main()
{
	int n;
	cin >> n;
	hannoi(n, 'B', 'A', 'C');
    return 0;
}


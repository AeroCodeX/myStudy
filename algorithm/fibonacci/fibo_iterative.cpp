﻿#include "fibonacci.h"
long long fibo_iterative(int n)
{
	//! long long으로 표현할 수 있는 한계선.
	if (92 < n) return -1;

	long long fibo[93] = { 0, 1 };
	for (int i = 2; i <= n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	return fibo[n];
}
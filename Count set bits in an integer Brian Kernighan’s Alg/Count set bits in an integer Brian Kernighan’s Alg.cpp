// Count set bits in an integer Brian Kernighan’s Alg.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int countSetBits(int n)
{
	if (n == 0)
		return 0;
	else
		return 1 + countSetBits(n &(n - 1));
}

int main()
{
	int n = 9;
	cout << countSetBits(n);

    return 0;
}


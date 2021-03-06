﻿#pragma once
#include <string.h>
#define PRIME_MAX 1000000000

bool* generate_prime_brute();
bool* generate_prime_brute_improved();
bool* generate_prime_eratos();
bool* generate_prime_eratos_improved();
bool* generate_prime_atkin();

void inline sieve(int n, bool* map)
{
	int next = 2 * n;
	while (next <= PRIME_MAX)
	{
		memset(&map[next], false, sizeof(bool)); // fast version of (map[next] = false);
		next += n;
	}
}
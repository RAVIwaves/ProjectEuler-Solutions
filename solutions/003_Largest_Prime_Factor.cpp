/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=3
 */

#include <bits/stdc++.h>
using namespace std;

// This function calculates largest prime factor.
long long solve(long long n)
{
    long long factor=2;
    while(factor*factor <= n)
    {
        if(n%factor == 0)
            n /= factor;
        else
            factor++;
    }
    return n;
}

int32_t main()
{
    cout << solve(600851475143LL);
    return 0;
}
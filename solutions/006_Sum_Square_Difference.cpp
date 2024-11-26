/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=6
 */

#include <bits/stdc++.h>
using namespace std;

// Sum of integers from 1 to 'n'.
int sum1(int n)
{
    return n*(n+1)/2;
}

// Sum of squares from 1 to 'n'.
int sum2(int n)
{
    return n*(n+1)*(2*n+1)/6;
}

int solve(int n)
{
    int sum = sum1(n);
    return sum*sum - sum2(n);
}

int32_t main()
{
    cout << solve(100);
    return 0;
}
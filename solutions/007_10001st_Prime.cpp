/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=7
 */

#include <bits/stdc++.h>
using namespace std;

// Checks if prime.
bool is_prime(int n)
{
    if(n==1)
        return false;
    for(int i=2 ; i*i<=n ; i++)
        if(n%i==0)
            return false;
    return true;
}

int solve(int n)
{
    int cnt=0;
    for(int i=2 ; ; i++)
        if(is_prime(i))
        {
            cnt++;
            if(cnt==n)
                return i;
        }
}

int32_t main()
{
    cout << solve(10001);
    return 0;
}
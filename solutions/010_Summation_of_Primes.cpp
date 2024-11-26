/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=10
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

// Sum of primes less than 'n'.
int solve(int n)
{
    vector<bool> is_prime(n,true);
    int prime_sum = 0;
    for(int i=2 ; i<n ; i++)
    {
        if(is_prime[i])
        {
            prime_sum += i;
            for(int j=2*i ; j<n ; j+=i)
                is_prime[j] = false;
        }
    }
    return prime_sum;
}

int32_t main()
{
    cout << solve(2000000);
    return 0;
}
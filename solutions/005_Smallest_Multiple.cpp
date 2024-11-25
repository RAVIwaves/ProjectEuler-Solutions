#include <bits/stdc++.h>
using namespace std;

// Calculates lcm of 1 to 'n'.
long long solve(long long n)
{
    long long lcm_all=1;
    for(long long i=2 ; i<=n ; i++)
        lcm_all = lcm_all*i/gcd(lcm_all, i);
    return lcm_all;
}

int32_t main()
{
    cout << solve(20LL);
    return 0;
}
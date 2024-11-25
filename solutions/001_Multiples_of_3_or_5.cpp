#include <bits/stdc++.h>
using namespace std;

// Sum of multiples of 'key' less than 'limit'
int mult_sum(int limit, int key)
{
    int cnt = (limit-1)/key;
    return key*cnt*(cnt+1)/2;
}

int solve(int n)
{
    return mult_sum(n, 3) + mult_sum(n, 5) - mult_sum(n, 15);
}

int32_t main()
{
    cout << solve(1000);
    return 0;
}
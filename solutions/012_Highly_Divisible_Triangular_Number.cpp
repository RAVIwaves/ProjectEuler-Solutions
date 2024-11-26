/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=12
 */

#include <bits/stdc++.h>
using namespace std;

// Count divisors of xth triangular number using factorization.
int triangular_num_div_cnt(int x)
{
    int y = x+1, div_cnt=1;
    for(int i=2 ; i*i<=max(x,y) ; i++)
    {
        int cnt=0;
        while(x%i==0)
        {
            x /= i;
            cnt++;
        }
        while(y%i==0)
        {
            y /= i;
            cnt++;
        }
        if(i==2)
            div_cnt *= cnt;
        else
            div_cnt *= cnt+1;
    }
    if(x!=1)
        div_cnt *= 2;
    if(y!=1)
        div_cnt *= 2;
    return div_cnt;
}

int solve(int n)
{
    for(int i=1 ; ; i++)
        if(triangular_num_div_cnt(i)>n)
            return i*(i+1)/2;
}

int32_t main()
{
    cout << solve(500);
    return 0;
}
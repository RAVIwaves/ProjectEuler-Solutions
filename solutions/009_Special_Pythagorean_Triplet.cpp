/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=9
 */

#include <bits/stdc++.h>
using namespace std;

// Taking (a < b < c) and iterating for 'a' and 'b'.
int solve(int n)
{
    for(int a=1 ; a<n ; a++)
        for(int b=a+1 ; n-a-b>b ; b++)
        {
            int c = n-a-b;
            if(a*a + b*b == c*c)
                return a*b*c;
        }
}

int32_t main()
{
    cout << solve(1000);
    return 0;
}
/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=2
 */

#include <bits/stdc++.h>
using namespace std;

// Iteratively calculates the next Fibonacci number and adds it to the sum if it is even.
int solve(int n)
{
    int prev=1, curr=1, sum=0;
    while(curr<n)
    {
        if(curr%2 == 0)
            sum += curr;
        prev += curr;
        swap(prev, curr);
    }
    return sum;
}

int32_t main()
{
    cout << solve(4000000);
    return 0;
}
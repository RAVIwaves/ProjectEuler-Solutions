/*
 * Author: RAVIwaves
 * Problem: https://projecteuler.net/problem=4
 */

#include <bits/stdc++.h>
using namespace std;

// Checks the number is palindrome or not
bool is_palindrome(int x)
{
    string num_s = to_string(x);
    int len = num_s.length();
    for(int i=0 ; i<len-i-1 ; i++)
        if(num_s[i] != num_s[len-i-1])
            return false;
    return true;
}

int solve()
{
    int ans=0;
    for(int n1=100 ; n1<1000 ; n1++)
        for(int n2=n1 ; n2<1000 ; n2++)
            if(is_palindrome(n1*n2))
                ans = max(ans, n1*n2);
    return ans;
}

int32_t main()
{
    cout << solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        int a[n * 2];
        
        for (int i = 0; i < n * 2; ++i) 
            cin >> a[i];
        
        int even_count = 0, odd_count = 0;
        
        for (int i = 0; i < n * 2; ++i) {
            if (a[i] % 2 == 0) 
                ++even_count;
            else 
                ++odd_count;
        }
        
        if (even_count == odd_count) 
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    
    return 0;
}


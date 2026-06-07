#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("subseq.inp", "r", stdin);
	freopen("subseq.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    
    long long min_ending_here = a[0];
    long long min_so_far = a[0];
    
    for(int i = 1; i < n; ++i) {
        min_ending_here = min(a[i], min_ending_here + a[i]);
        min_so_far = min(min_so_far, min_ending_here);
    }
    
    cout << min_so_far << endl;
    
    return 0;
}


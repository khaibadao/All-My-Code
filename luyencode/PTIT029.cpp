#include<bits/stdc++.h>
//#define mod 1000000007
#define Siz(s) s.size()
using namespace std;

int main(){
//    freopen("profact.inp", "r", stdin);
//    freopen("profact.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    priority_queue <long long, vector <long long>, greater <long long>> pee;
    for(long x : a) pee.push(x);
    long long ans = 0;
    while(Siz(pee) > 1){
    	long long t1 = pee.top(); pee.pop();
    	long long t2 = pee.top(); pee.pop();
    	ans += t1 + t2;
    	pee.push((long long)(t1 + t2));
	}
	cout << ans;
    return 0;
}


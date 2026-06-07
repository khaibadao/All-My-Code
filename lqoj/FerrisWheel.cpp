#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    long S;
    cin >> n >> S;
    vector <long> a(n);
    unordered_map <long, int> maa;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	++maa[a[i]];
	}
	sort(a.begin(), a.end());
	int cnt = 0;
	int l = 0, r = n - 1;
	while(l < r){
		if(a[l] + a[r] <= S){
			a[l] = a[r] = 0;
			++l, --r;
			++cnt;
		}else --r;
	}
	for(int i : a){
		if(i) ++cnt;
	}
	cout << cnt;
    return 0;
}


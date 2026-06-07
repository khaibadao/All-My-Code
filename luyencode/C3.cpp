#include<bits/stdc++.h>
#define Mod 1000000007
#define ModF 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	long k; cin >> k;
	vector <int> a(n);
	unordered_map <long, int> maa;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++maa[a[i]];
	}
	int cnt = 0;
	for(int i = 0; i < n ; ++i){
		long x = sqrt(k - a[i]);
		if(x*x == k - a[i]){
			if(maa[x]){
				cnt += maa[x];
//				cout << a[i] << ' ' << x << en;
			}
		}
		--maa[a[i]];
	}
	cout << cnt;
	return 0;
}

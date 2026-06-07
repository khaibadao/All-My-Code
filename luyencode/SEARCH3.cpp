#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m; cin >> n >> m;
	vector <long> a(n + 1), b(m + 1);
	unordered_map <long, int> maa;
//	memset(paa, 0, sizeof(paa));
    for(int i = 1 ; i <= n ; ++i){
    	cin >> a[i];
    	(!maa[a[i]]) ? maa[a[i]] = i : maa[a[i]] = min(maa[a[i]], i);
	}
    for(int i = 1 ; i <= m ; ++i){
    	cin >> b[i];
    	(maa[b[i]]) ? cout << maa[b[i]] << ' ' : cout << 0 << ' ';
	}
	return 0;
}

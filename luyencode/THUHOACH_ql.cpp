#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int n, k; 
int a[haha];
int ans = 0;

void ql(int sum, int pos){
	if(sum > k) return;
	ans = max(ans, sum);
	for(int i = pos ; i < n ; ++i){
		ql(sum + a[i], ++pos);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	ql(0, 0);
	cout << ans;
	return 0;
}

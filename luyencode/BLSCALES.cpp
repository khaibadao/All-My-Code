#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int n, m;
int a[haha]; int b[haha];
unordered_map <int, int> maa;
void ql(int sum, int pos){
	maa[sum] = 1;
	if(pos == n) return;
	for(int i = pos; i < n ; ++i) ql(sum + a[i], i + 1);
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < m ; ++i) cin >> b[i];
	ql(0, 0);
	for(int i = 0 ; i < m ; ++i){
		cout << maa[b[i]];
	}
	return 0;
}

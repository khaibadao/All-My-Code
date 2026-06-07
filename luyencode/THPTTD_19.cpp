#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void xu_ly(int n){
	vector <int> uoc(n + 1, 0);
	for(int i = 1 ; i <= n ; ++i){
		for(int j = i ; j <= n ; j += i){
			++uoc[j];
		}
	}
	int so = 0, count = 0;
	for(int i = 1 ; i <= n ; ++i){
		if(uoc[i] > count){
			count = uoc[i];
			so = i;
		}
	}
	cout << so;
}
int main() {
	freopen("demuoc.inp", "r", stdin);
	freopen("demuoc.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n; cin >> n;
    xu_ly(n);
    return 0;
}


#include<bits/stdc++.h>
#define Mod 1000000007
#define ModF 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define ll long long

using namespace std;

int dem[1000001];

void k()
{
	for(int i = 1 ; i <= 1000000 ; ++i) dem[i] = 0;
}

void tach(int n){
	++dem[n];
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			if(i != n/i){
				++dem[i]; ++dem[n/i];
			}else ++dem[i];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	k();
	int n; cin >> n;
	vector <int> a(n);
	int x = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		x = max(x, a[i]);
		tach(a[i]);
	}
	int t = 0;
	for(int i = x; i >= 1 ; i--){
		if(dem[i] >= 2){
			++t;
			cout << i;
			break;
		}
	}
	if(!t) cout << 1;
	return 0;
}

#include<bits/stdc++.h>
#define Mod 1000000007
#define ModF 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

long a[1000001];

void sang()
{
	for(int i = 1; i <= 1000000; ++i){
		for(int j = i ; j <= 1000000 ; j += i){
			++a[j];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	sang();
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		cout << a[x] << en;
	}
	return 0;
}

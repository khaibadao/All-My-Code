#include <bits/stdc++.h>
#define Siz(s) s.size()

int prime[1000001];
void sang(){
	for(int i = 1 ; i <= 1000000 ; ++i){
		for(int j = i ; j <= 1000000 ; j += i){
			++prime[j];
		}
	}
}
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    int n; cin >> n;
    while(n--){
    	int x; cin >> x;
    	cout << prime[x] << '\n';
	}
    return 0;
}

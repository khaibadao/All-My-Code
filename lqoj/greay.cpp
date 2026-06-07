#include <bits/stdc++.h>
using namespace std;

string gray[1000001];

void sang(int n){
	int vi_tri = 2;
	for(int i = 2 ; i <= n ; ++i){
		int k = pow(2, i);
		for(int j = 1 ; j <= vi_tri ; ++j){
			gray[k - j + 1] = "1" + gray[j];
			gray[j] = "0" + gray[j];
		}
		vi_tri = k;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int l = pow(2, n);
    gray[1] = "0", gray[2] = "1";
    if(n > 1){
    	sang(n);
	}
	for(int i = 1 ; i <= l ; ++i){
		cout << gray[i] << '\n';
	}
    return 0;
} 

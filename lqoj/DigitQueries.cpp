#include <bits/stdc++.h>
using namespace std;

char blabla(long long k){
    long long chu_so = 1;
	long long so_luong = 9;
	long long sum = 1;
	while(k > chu_so*so_luong){
		k -= chu_so*so_luong;
		++chu_so; so_luong *= 10;
		sum *= 10;
	}
	sum += (k - 1)/chu_so;
	string truy_van = to_string(sum);
	return truy_van[(k - 1)%chu_so];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long long k; cin >> k;
    	cout << blabla(k) << '\n';
	}
    return 0;
} 

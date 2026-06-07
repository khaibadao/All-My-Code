#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	long a[n + 1];
	long dem[n + 1] = {0};
	int Min = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		dem[a[i]]++;
	}
	for(int i = 0 ; i < n ; i++){
		if(!dem[i]){
			cout << i << endl;
		}
	}
	return 0;
}

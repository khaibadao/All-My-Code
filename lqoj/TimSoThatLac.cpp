#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;
    int a[n + 1];
    int dem[100000] = {0};
    for(int i = 1 ; i <= n ; i++){
    	cin >> a[i];
    	dem[a[i]]++;
	}
	sort(a + 1, a + n + 1);
	long b[n - m + 1];
	for(int i = 1 ; i <= n - m ; i++){
		cin >> b[i];
		dem[b[i]]--;
	}
	for(int i = 1 ; i <= n ; i++){
		if(dem[a[i]] >= 1){
			cout << a[i] << " ";
			dem[a[i]]--;
		}
	}
	return 0;
}

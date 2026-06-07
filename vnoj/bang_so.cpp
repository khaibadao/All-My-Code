#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n + 1];
    int dem = 0;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    int gia_tri = *max_element(a, a + n);
    for(int i = 0 ; i < n ; ++i){
    	long long sum = 0;
    	for(int j = i ; j < n ; ++j){
    		sum += a[j];
    		if(sum < gia_tri) continue;
    		else if(sum > gia_tri) break;
    		else ++dem;
		}
	}
	cout << dem;
	return 0;
}

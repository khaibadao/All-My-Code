#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 1];
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    int gia_tri = 1000000;
    for(int i = 1 ; i <= n ; ++i){
    	if(a[i] != 0 && k >= a[i] && i != m) gia_tri = min(gia_tri, abs(m*10 - i*10));
	}
	if(gia_tri != 1000000) cout << gia_tri;
	else cout << -1;
    return 0;
}

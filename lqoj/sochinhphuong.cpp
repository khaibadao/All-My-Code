#include<bits/stdc++.h>
using namespace std;
long cp(long a){
	int gia_tri = sqrt(a);
	if(gia_tri * gia_tri == a)
	    return 1;
	return 0;
}
int main()
{
//	freopen("SQUARE.INP", "r", stdin);
//	freopen(" SQUARE.OUT", "w", stdout);
    long n, k; cin >> n >> k;
    int cnt = 0;
    int c2 = sqrt(k); int c1 = sqrt(n);
    if(c2 * c2 != k)
        c2++;
    for(int i = c2 ; i <= c1 ; i++){
    	cnt++;
	}
	cout << cnt;
	return 0;
}

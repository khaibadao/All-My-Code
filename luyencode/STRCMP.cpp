#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b; cin >> a >> b;
    if(a < b){
    	for(int i = 1 ; i <= b ; ++i) cout << a;
	}else for(int i = 1 ; i <= a ; ++i) cout << b;
    return 0;
}


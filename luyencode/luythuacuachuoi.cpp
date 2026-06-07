#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	string c = "";
	int n; cin >> n;
	for(int i = 0 ; i < n ; i++){
		c += a;
	}
//	cout << c << endl;
	if(c == b){
		cout << "YES";
	}else
	    cout << "NO";
	return 0;
}

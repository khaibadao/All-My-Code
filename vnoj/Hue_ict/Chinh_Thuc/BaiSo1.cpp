#include<bits/stdc++.h>
using namespace std;
int check(long long a){
	int dem[10] =  {0};
	string s = to_string(a);
	for(int i = 0 ; i < s.size() ; ++i){
		++dem[s[i] - '0'];
		if(dem[s[i] - '0'] == 2) return 0;
	}
	return 1;
}
int main()
{
	long long a; cin >> a;
//	vector <string> a(0);
    if(a >= 10000000000) cout << 1863218;
    else
    {
    	while(a%5 != 0) a--;
		int dem = 0;
		for(long long i = a; i >= 5 ; i -= 5){
			if(check(i)){
				++dem;
			}
		}
		cout << dem;
	}
	
	return 0;
}

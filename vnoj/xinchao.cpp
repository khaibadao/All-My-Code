#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string a; cin >> a;
    int chi_so_a = 0;
    while(n--){
    	string s ; cin >> s; int chi_so_s = 0;
    	string xau_phu = "";
    	while(chi_so_a <= a.size() - 1){
    		for(int i = chi_so_s; i < s.size() ; i++){
    			if(s[i] == a[chi_so_a]){
    				chi_so_s = i + 1;
    				xau_phu += s[i];
    				break;
				}
			}
			chi_so_a++;
		}
		if(xau_phu == a) cout << "YES" << endl;
		else cout << "NO" << endl;
		chi_so_a = 0;
    }
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a; cin >> a;
	map<char, int> mp;
	for(int i = 0 ; i < a.size() ; i++){
	  mp[a[i]]++;	
	}
	char cnt; int gia_tri = 0;
	for(auto it : mp){
		if(it.second >= gia_tri)
		   gia_tri = it.second;
	}
	for(auto it : mp){
		if(it.second == gia_tri){
		    cout << it.first;
	    	break;
     	}
	}
	return 0;
}

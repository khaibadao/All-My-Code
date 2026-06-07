#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	string s; cin >> s;
	int dem = 0;
	char kt = s[0];
	int count = 1;
	for(int i = 1 ; i < Siz(s) ; i++){
		if(s[i] == kt) ++count;
		else{
			if(count > 1){
				if(count%2 == 0) dem += count/2;
				else dem += (count - 1)/2;
			}
			kt = s[i];
			count = 1;
		} 
	}
	if(count > 1){
		if(count%2 == 0) dem += count/2;
		else dem += (count - 1)/2;
	}
	cout << dem;
	return 0;
}

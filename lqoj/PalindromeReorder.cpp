#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void rev(string &s){
	int l = 0, r = s.size() - 1;
	while(l < r){
		char tmp = s[l];
		s[l] = s[r];
		s[r] = tmp;
		++l, --r;
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    unordered_map <char, int> maa;
    for(char x : s) ++maa[x];
    int check = 0;
    string between = "";
    for(const auto &it : maa){
    	if(it.second%2 != 0){
    		++check;
    		if(check == 2){
         		return cout << "NO SOLUTION", 0;
    		}
    		int ans = it.second;
    		while(ans--) between += it.first;
    		int kq = it.first;
    		maa[kq] = 0;
		}
	}
	string left = "";
	for(const auto &it : maa){
		int ans = it.second/2;
		while(ans--) left += it.first;
	}
	between = left + between;
	rev(left);
	between = between + left;
	cout << between;
    return 0;
}

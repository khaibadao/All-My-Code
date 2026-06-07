#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; getline(cin, s);
	map <char, int> maa;
	for(char x : s) ++maa[x];
	for(const auto &it : maa){
	    char x = it.first;
        if('a' <= x && x <= 'z') cout << x << ':' << it.second << '\n';
	}
	return 0;
}

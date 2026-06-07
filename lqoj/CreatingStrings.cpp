#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    if(Siz(s) <= 1) return cout << 1 << '\n' << s, 0;
    unordered_map <char, int> maa;
    long long res = Siz(s);
    long long tu = 1;
    for(int i = 2 ; i <= res ; ++i) tu *= i;
    long long mau = 1;
    for(char x : s) ++maa[x];
    for(const auto &it : maa){
    	int so = it.second;
    	for(int i = 2 ; i <= so ; ++i) mau *= i;
	}
	cout << tu/mau << '\n';
    sort(s.begin(), s.end());
    do
    {
    	cout << s << '\n';
	}while(next_permutation(s.begin(),s.end()));
    return 0;
}

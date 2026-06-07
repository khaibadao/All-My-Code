#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 1000000000+7

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n = 3;
	int a[3];
	unordered_map <int, int> maa;
	for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        ++maa[a[i]];
	}
	if(a[0] == a[1] && a[1] == a[2]){
        cout << a[0] + 1;
        return 0;
    }
	int d = min(abs(a[0] - a[1]), abs(a[1] - a[2]));
	sort(a, a + 3);
	for(int i = 0 ; i < n ; ++i){
        if(!maa[a[i] + d]) return cout << a[i] + d, 0;
	}
	cout << a[0] + d;
	return 0;
}


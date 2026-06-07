#include<bits/stdc++.h>
using namespace std;
int main(){
    map <int, int> mp;
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++){
        mp[i]++;
    }
    for(int i = 1 ; i < n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto it : mp){
        if(it.second < 2){
            cout << it.first << " ";
        }
    }
    return 0;
}

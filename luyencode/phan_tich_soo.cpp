#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    queue <string> qe;
    for(int i = 2 ; i <= sqrt(n) ; ++i){
        if(n%i == 0){
            while(n%i == 0){
                qe.push(to_string(i));
                qe.push("*");
                n /=i;
            }
        }
    }
    if(n != 1){
        qe.push(to_string(n));
        qe.push("*");
    }
    while(Siz(qe) > 1){
        cout << qe.front();
        qe.pop();
    }
    return 0;
}

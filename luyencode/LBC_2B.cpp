#include <bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

void nho(string a, string b)
{
    int n1 = Siz(a), n2 = Siz(b);
    int nho = 0;
    int cnt = 0;
    for(int i = 0 ; i < n1 - n2; ++i) b = '0' + b;
    for(int i = n1 - 1 ; i >= n1 - n2; i--){
        if(a[i] == '1' && b[i] == '1')
        {
            if(!nho){
                ++cnt;
                ++nho;
            }else ++cnt;
        }else if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
        {
            if(nho) ++cnt;
            else continue;
        }else nho = 0;
    }
    int so = n1 - n2;
    while(so--){
        if(nho && a[so] == '1'){
            ++cnt;
        }
        else break;
    }
    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b; cin >> a >> b;
    if(Siz(a) > Siz(b)) nho(a, b);
    else nho(b, a);
    return 0;
}

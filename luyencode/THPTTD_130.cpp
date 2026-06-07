#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int n;
void chuyen(vector <long> &a, int cnt, int mid)
{
    if(cnt <= mid){
        for(int i = cnt; i > 1 ; i--){
            if(a[i - 1]) swap(a[i], a[i - 1]);
            else break;
        }
    }else
    {
        for(int i = cnt; i < n; ++i){
            if(a[i + 1]) swap(a[i], a[i + 1]);
            else break;
        }
    }
}
int main() {
    freopen("Cele.inp", "r", stdin); 
    freopen("Cele.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int mid = n/2;
    vector <long> a(n + 2, 0);
    priority_queue <long> pr;
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
        pr.push(a[i]);
    }
    long long sum = 0;
    while(!pr.empty()){
        auto it = find(a.begin(), a.end(), pr.top());
        pr.pop();
        int res = distance(a.begin(), it);
        sum += a[res];
//        cout << res << '\n';
        if(res > 0)
            sum += a[res - 1];
//            cout << a[res - 1] << ' ';
//        cout << a[res] << ' ';
        if(res < n - 1)
            sum += a[res + 1];
//            cout << a[res + 1] << '\n';
        a[res] = 0;
        chuyen(a, res, mid);
//        cout << "----------------" << '\n';
    }
    cout << sum;
    return 0;
}

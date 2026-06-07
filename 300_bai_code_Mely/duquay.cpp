#include<bits/stdc++.h>
using namespace std;
int tim_so_dau_tien(long a[], int n, int l, int r, long x){
    int res = 0;
    while(l <= r){
        int m = (l + r) /2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return res;

}
int tim_so_tiep_theo(long a[], int n, int l, int r, long x){
    int res = 0;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return res;
}
int main()
{
    int n; cin >> n;
    long k; cin >> k;
    long a[n];
    for(int i = 0 ; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    long long cnt = 0;
    long dem[n] = {0};
    for(int i = 0 ; i < n ; ++i){
        if(!dem[a[i]]){
            long x = k - a[i];
            int r1 = tim_so_dau_tien(a, n, i + 1, n - 1, x);
            if(r1){
                dem[a[i]] = dem[a[r1]] = 1;
                ++cnt;
            }
        }
    }
    for(int i = 0 ; i < n ; ++i) if(a[i]) ++cnt;
    cout << cnt << endl;
    return 0;
}

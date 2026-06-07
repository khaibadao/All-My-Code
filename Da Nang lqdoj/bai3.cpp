#include<bits/stdc++.h>
using namespace std;
int a[1000001], n;
void nhap(int a[], int &n)
{
    freopen("MATONG.INP" , "r" , stdin);
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}
void xuat(int a[], int n)
{
    freopen("XUAT.OUT" , "w" , stdout);
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << " ";
}
int main()
{
    nhap(a, n);
    xuat(a, n);
    return 0;
}

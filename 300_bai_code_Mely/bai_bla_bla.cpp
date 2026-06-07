#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tu1, mau1, tu2, mau2;
    cin >> tu1 >> mau1 >> tu2 >> mau2;
//    cout << a/b + c/d;
    // phan tich van de : 1. mau so : kiem tra 2 mau co chia het cho nhau va tim ra so lon hon
//                        : 2. khi co duoc mau nao lon hon thi nhan len nguoc len tu
//                          : cuoi cung kiem tra tu va mau co cung chia het cho 2 || 3 khong
    long long gia_tri = 1;
    long long tu = 0, mau = 0;
    if(((mau1%2 == 0 && mau2%2 == 0) || (mau1%3 == 0 && mau1%3 == 0) || (mau1%5 == 0 && mau1%5 == 0) || (mau1%7 == 0 && mau1%7 == 0)) && mau1 > mau2){
        gia_tri = mau1/mau2;
        tu2 *= gia_tri;
        mau2 *= gia_tri;
        tu = tu1 + tu2, mau = mau1;
    }else if(((mau1%2 == 0 && mau2%2 == 0) || (mau1%3 == 0 && mau2%3 == 0) || (mau1%5 == 0 && mau1%5 == 0) || (mau1%7 == 0 && mau1%7 == 0)) && mau2 > mau1){
        gia_tri = mau2/mau1;
        tu1 *= gia_tri;
        mau1 *= gia_tri;
        tu = tu1 + tu2, mau = mau1;
    }
    else{
        tu1 *= mau2;
        tu2 *= mau1;
        gia_tri = mau1;
        mau1 *= mau2;
        mau2 *= gia_tri;
        tu = tu1 + tu2, mau = mau1 + mau2;
    }
    while(tu%2 == 0 && mau1%2 == 0){
        tu /= 2;
        mau1 /= 2;
    }
    while(tu%3 == 0 && mau1%3 == 0){
        tu /= 3;
        mau1 /= 3;
    }
    while(tu%5 == 0 && mau1%5 == 0){
        tu /= 5;
        mau1 /= 5;
    }
    while(tu%7 == 0 && mau1%7 == 0){
        tu /= 7;
        mau1 /= 7;
    }
    cout << tu << " " << mau1;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;


// Hàm tìm t?ng |ai + bj| nh? nh?t
int find_min_abs_sum(vector<long>& a, vector<long>& b) {
    // T?o b?n sao c?a dãy a và b d? s?p x?p
    vector<long> sorted_a = a;
    vector<long> sorted_b = b;
    
    // S?p x?p hai dãy
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    
    int i = 0; // Con tr? cho dãy a
    int j = sorted_b.size() - 1; // Con tr? cho dãy b
    int min_sum = numeric_limits<long>::max(); // Kh?i t?o t?ng nh? nh?t v?i giá tr? r?t l?n

    // Duy?t qua dãy
    while (i < sorted_a.size() && j >= 0) {
        long long sum = sorted_a[i] + sorted_b[j];
        long long abs_sum = abs(sum);
        
        if (abs_sum < min_sum) {
            min_sum = abs_sum;
        }
        
        // Di chuy?n con tr? d? tìm t?ng nh? hon
        if (sum < 0) {
            ++i; // Tang con tr? i n?u t?ng hi?n t?i âm
        } else {
            --j; // Gi?m con tr? j n?u t?ng hi?n t?i duong ho?c b?ng 0
        }
    }
    
    return min_sum;
}

int main() {
	int n; cin >> n;
	vector <long> a(n);
	vector <long> b(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i) cin >> b[i];
    long min_abs_sum = find_min_abs_sum(a, b);
    cout << min_abs_sum;
    
    return 0;
}


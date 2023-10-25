const int MOD = 1000000007;

int Maximize(int a[], int n) {
    sort(a, a + n);
    
    long long sum = 0; 
    
    for (int i = 0; i < n; i++) {
        sum += (1LL * a[i] * i) % MOD; 
        sum = sum % MOD; 
    }
    
    return sum;
}
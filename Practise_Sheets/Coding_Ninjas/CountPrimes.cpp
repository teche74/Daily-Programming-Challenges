    int countPrimes(int n) {
        vector<bool>prime(n+1, true);

        for(int i=2;i<=sqrt(n);i++){
            if(prime[i]){
                for(long long j = (long long)i*i; j<n ; j+=i ){
                    prime[j] =false;
                }
            }
        }

        int cn =0;

        for(int i=2;i<n;i++){
            if(prime[i]) cn++;
        }
        return cn;
    }

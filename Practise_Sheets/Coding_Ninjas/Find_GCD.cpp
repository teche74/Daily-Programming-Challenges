int calcGCD(int n, int m){
    if( m == 0){
        return n;
    }
    else{
        return calcGCD(m, n %m);
    }
}

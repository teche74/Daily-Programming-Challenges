int elementThatAppearsOnce(vector<int> arr) {
    int ones =0, twos=0;
    for(auto x:arr){
        ones = (ones^x) & (~twos);
        twos = (twos^x) & (~ones);
    }
    return ones;
}


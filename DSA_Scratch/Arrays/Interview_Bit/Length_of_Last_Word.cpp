int Solution::lengthOfLastWord(const string A) {
    int len = A.length() - 1;

    while (len >= 0 && !isalpha(A[len])) {
        len--;
    }
    
    int count = 0;
    
    while (len >= 0 && A[len] != ' ') {
        count++;
        len--;
    }
    
    return count;
}

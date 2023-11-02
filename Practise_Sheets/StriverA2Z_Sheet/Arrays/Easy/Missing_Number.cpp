int missingNumber(vector<int>&a, int N) {
  int sum =0;
  for (int num : a) {
      sum += num;
  }
    int fin = N * (N+1)/2 ;

    return fin-sum;
}

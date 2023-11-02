vector<int> sortedArray(vector<int> a, vector<int> b) {
  vector<int> res;

  int i = 0, j = 0;
    int len1 = a.size(), len2 = b.size();
    int temp;

    while (i < len1 && j < len2) {

        if (a[i] < b[j]) {
            if(temp != a[i]){
                res.push_back(a[i]);
                temp=a[i];
            }
            i++;
        } else if(a[i] > b[j]){
            if(temp != b[j]){
                res.push_back(b[j]);
                temp=b[j];
            }
            j++;
        }
        else{
            if(temp != a[i]){
                res.push_back(a[i]);
                temp=a[i];
            }
            i++,j++;
        }
    }

    while (i < len1) {
        if(temp != a[i]){
                res.push_back(a[i]);
                temp=a[i];
            }
        i++;
    }
    while (j < len2) {
        if(temp != b[j]){
                res.push_back(b[j]);
                temp=b[j];
            }
        j++;
    }

    return res;
}

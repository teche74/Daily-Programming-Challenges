vector<int> query(vector<vector<int>> &mat, int m, int n, vector<string> &q) {
  // int count=0;
  vector<int> res;
  for (auto &t : q) {
    int qry = t[0] - '0';
    char rc = t[1];
    int index = t[2] - '0';

    if (qry == 1) {
      if (rc == 'R') {
        for (int i = 0; i < n; i++) {

          mat[index][i] =  mat[index][i] == 1 ? 0 : 1;
        }
      }

      if (rc == 'C') {
        for (int i = 0; i < m; i++) {
          mat[i][index] = mat[i][index] == 1 ? 0 : 1;
        }
      }
    }
    else if (qry == 2) {
      int count = 0;
      if (rc == 'R') {
        for (int j = 0; j < m; j++) {
          if (mat[index][j] == 0)
            count++;
        }

      } else {
        for (int j = 0; j < n; j++) {
          if (mat[j][index] == 0)
            count++;
        }
      }
      res.push_back(count);
    }
  }

  return res;
}

#include <iostream>
#include <cassert>
using namespace std;

struct matrix {
  long long v[5][5];
  int row, col; // number of row and column
};
long long mod;

// multiplies two matrices and returns the result
matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (int i = 0; i < r.row; i++) {
    for (int j = 0; j < r.col; j++) {
      long long sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum = (sum%mod)+ ((a.v[i][k]%mod) *(b.v[k][j]%mod))%mod;
        sum %= mod;
      }
      r.v[i][j] = sum;
    }
  }
  return r;
}

// returns mat^p
matrix power(matrix mat, int p) {
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1)
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}

int main() {
  int tcase;
  int a, b, n, m;

  //cin >> tcase;
  while (cin>> n >> m) {
    // input routine

    mod = 1;
    for(int i=1; i<=m; i++)
        mod*=2;
    // preparing the matrix
    matrix mat;
    mat.row = mat.col = 2;
    mat.v[0][0] = mat.v[0][1] = mat.v[1][0] = 1;
    mat.v[1][1] = 0;

    // preparing mod value
    if (n < 3) {
      if (n == 0) cout << 0 << endl;
      if (n == 1) cout << 1 << endl;
      if (n == 2) cout << 1 << endl;
    } else {
        //cout<<mod<<endl;
      mat = power(mat, n - 2);
   //   cout<<mat.v[0][0]<<" "<<mat.v[0][1]<<endl;
      int ans = mat.v[0][0] +  mat.v[0][1];
      ans %= mod;
      cout << ans << endl;
    }
  }
  return 0;
}


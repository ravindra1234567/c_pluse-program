#include <bits/stdc++.h>
using namespace std;
int main() {
  int row, column, value;
  cout << "Enter Number of Row : ";
  cin >> row;
  cout << "Emter Number of Column : ";
  cin >> column;
  vector<vector<int>> A(row, vector<int>(column));
  vector<vector<int>> B(row, vector<int>(column));
  vector<vector<int>> C(row, vector<int>(column));
  // vector<vector<int>> D(row, vector<int>(column));
  cout << "Matrix A" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> value;
      A[i][j] = value;
    }
  }
  cout << "Matrix B " << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> value;
      B[i][j] = value;
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << C[i][j] << "  ";
    }
    cout << endl;
  }
  cout << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (i == j)
        cout << C[i][j] << " ";
      else
        cout << " ";
    }
    cout << endl;
  }
  cout << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (j + i == row-1)
        cout << C[i][j] << " ";
      else
        cout << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (i == j)
        cout << C[i][i] << " ";
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}

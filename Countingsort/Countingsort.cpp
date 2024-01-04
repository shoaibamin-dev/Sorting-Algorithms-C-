#include <iostream>
using namespace std;

void CSort(int A[], int k) {
  int B[10];
  int C[10];
  int max = A[0];

  for (int i = 1; i < k; i++) {
    if (A[i] > max)
      max = A[i];
  }
  for (int i = 0; i <= max; ++i) {
    C[i] = 0;
  }
  for (int i = 0; i < k; i++) {
    C[A[i]]++;
  }
  for (int i = 1; i <= max; i++) {
    C[i] += C[i - 1];
  }
  for (int i = k - 1; i >= 0; i--) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }
  for (int i = 0; i < k; i++) {
    A[i] = B[i];
  }
}
void printA(int A[], int k) {
  for (int i = 0; i < k; i++)
    cout << A[i] << " ";
  cout << endl;
}
int main() {
  int A[] = {3, 0, 4, 1, 3, 4, 1, 4};
  int n = sizeof(A) / sizeof(A[0]);
  CSort(A, n);
  printA(A, n);
}

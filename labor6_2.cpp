#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int n, const int Low, const int High)
{
  for (int i = 0; i < n; i++)
    a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
  for (int i = 0; i < n; i++)
    cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
  cout << endl;
}
int Max(int* a, const int n)
{
  int max = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > max)
      max = a[i];
  }
  return max;
}
int Min(int* a, const int n) {
  int min = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] < min)
      min = a[i];

  }
  return min;
}
  int searchmin(int* a, const int n) {
    int minindex = 0;
    for (int i = 1; i < n; i++) {
      if (a[i] < a[minindex])
        minindex = i;
    }
    return minindex;
  }
  int searchmax(int* a, const int n) {
    int maxindex = 0;
    for (int i = 1; i < n; i++) {
      if (a[i] > maxindex)
        maxindex = i;
    }
    return maxindex;
  }

int main()
{
  srand((unsigned)time(NULL)); 
  const int n = 5;
  int a[n];
  int Low = -10;
  int High = 10;
  Create(a, n, Low, High);
  Print(a, n);
  cout << "max = " << Max(a, n) << endl;
  cout << "min = " << Min(a, n) << endl;
  cout << "min index = " << searchmin(a, n) << endl;
  cout << "max index = " << searchmax(a, n) << endl;
  return 0;
}
#include <iostream>
using namespace std;

int ApSerices(int n)
{
  int ap = 3 * n + 7;
  return ap;
}

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int ans = ApSerices(n);
  cout << "Answer is: " << ans << endl;

  return 0;
}
#include <algorithm>
#include <iostream>
using namespace std;

void Main()
{
  int n;
  long long a[1000], b[1000];
  int count1=0, count2=0;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
  {
    if (a[i] == b[i])
      count1 += 1;
    for (int j = 0; j < n; j++)
    {
      if (a[i] == b[j] && i != j)
        count2 += 1;
    }
  }

  cout << count1 << endl << count2 << endl;
}

int main(int argc, char **argv)
{
  Main();
  return 0;
}
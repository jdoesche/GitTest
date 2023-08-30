
#include <iostream>
using namespace std;

int recsum(int n);

int main()
{
  cout << "HELLO World!" << endl;

  int n;
  cout << "Please enter a number:";
  cin >> n;
  cout << endl;

  int ret = recsum(n);

  cout << "The recursive sum of " << n << " is " << ret << endl;
  
  return 0;
}


int recsum(n)
{
  int i = 1;
  int sum = 0;
  
  while (i <= n)
    {
      sum += i;
      i++;
    }

  return sum;
}


#include <iostream>
using namespace std;

int recsum(int n);
int fact(int n);

int main()
{
  cout << "HELLO World!" << endl;

  int n;
  cout << "Please enter a number:";
  cin >> n;
  cout << endl;

  int ret = recsum(n);

  cout << "The recursive sum of " << n << " is " << ret << endl;

  ret = fact(n);

  cout << n << "! = " << ret << endl;
  
  return 0;
}


int recsum(int n)
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

int fact(int n)
{
  int i = 1;
  int prod = 1;

  while (i <= n)
    {
      prod = prod * i;
      i++;
    }

  return prod;
}

/*
Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.
Find the minimum number of pizzas they should order to satisfy their appetite.
*/
#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int T;
  cout << "Enter the number of cases:" << endl;
  cin >> T;
  for (int i = 1; i <= T; i++)
	{
	  int N, X;
	  cout << "Enter number of friends and number of slices requred by each:"
		<< endl;
	  cin >> N >> X;
	  int m = N * X;
	  int a = m / 4;
	  if (m % 4 == 0)
		{
		  cout << "The number of PIZZAS are :" << endl;
		  cout << a << endl;
		}
	  else
		cout << "The number of PIZZAS are :" << endl;
	  cout << a + 1 << endl;
	}

}

/* In this example, 1 Kg. of pulp can be used for making 1000 pages and 1 notebook required 100 pages,
So we can find number of notebooks*/


#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int T;
  cout << "Enter the number of test cases:-" << endl;
  cin >> T;
  for (int i = 1; i <= T; i++)
	{

	  int x, y, a;
	  cout << "Enter the number of Kg.:" << endl;
	  cin >> x;
	  y = x * 1000;
	  a = y / 100;
	  cout << "Number of notebook's are:-" << endl;
	  cout << a << endl;
	}

}

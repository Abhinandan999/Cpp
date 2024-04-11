/* In this Example, Shopkeeper have 30 % of expencess over the sell of number of cups of sugarcane juice. We have to find the profit*/

#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++)
	{
	  int x, m, y;
	  cin >> x;

	  m = x * 50;
	  y = (m * 30) / 100;
	  cout << y << endl;

	}

}

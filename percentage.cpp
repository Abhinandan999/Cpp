/*
To determine if Munchy is an expert or not, we need to compare the percentage of approved problems to the threshold of 50%.
Let's represent:
X = Total number of problems submitted by Munchy
Y = Number of problems approved by Chef
P = Percentage of approved problems
*/



#include <bits/stdc++.h>

using namespace std;

int
main ()
{

  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
	{

	  int y, x;
	  cin >> x >> y;
	  int m;
	  m = (y * 100) / x;
	  if (m >= 50)
		{
		  cout << "YES" << endl;
		}
	  else
		cout << "No" << endl;


	}

  return 0;

}

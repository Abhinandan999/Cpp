/* Chef wants to reach home as soon as possible. He has two options:
Travel with his BIKE which takes X minutes.Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time?
*/

#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int T;
  cout << "Ente the number of test cases:" << endl;
  cin >> T;
  for (int i = 1; i <= T; i++)
	{
	  int x, y;
	  cout << "Enter the hours by Bike:" << endl;
	  cin >> x;
	  cout << "Enter the hours by Car:" << endl;
	  cin >> y;

	  if (x < y)
		{
		  cout << "BIKE" << endl;
		}
	  else if (x > y)
		{
		  cout << "CAR" << endl;
		}
	  else
		cout << "SAME" << endl;


	}

}

/* In this code we have to chek out of 4 company ,
each have 4 profits a,b,c,d respactively.
We have to check the monopoly company
( A single company who have much more profit than the other three companys sum of profit)
*/


#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int T;
  cout << "Enter the bnumber of loops:" << endl;
  cin >> T;
  for (int i = 1; i <= T; i++)
	{
	  int A, B, C, D;
	  cout << "Enter a,b,c,d" << endl;
	  cin >> A >> B >> C >> D;
	  if ((A > (B + C + D)))
		{
		  cout << "Yes" << endl;
		}
	  else if ((B > (A + C + D)))
		{
		  cout << "Yes" << endl;
		}
	  else if ((C > (A + B + D)))
		{
		  cout << "Yes" << endl;
		}
	  else if ((D > (A + C + B)))
		{
		  cout << "Yes" << endl;
		}
	  else
		{
		  cout << "No" << endl;
		}


	}

}

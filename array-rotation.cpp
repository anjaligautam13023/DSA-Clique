#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int
main ()
{
  vector < int >vec = { 4, 5, 6, 3, 1, 2, 9, 8 };
  int n = vec.size (), d, x;
  cout << "enter no of time you want to rotate the array";
  cin >> d;
  while (d > 0)
    {
      x = vec[0];
      for (int i = 1; i < n; i++)
	{
	  vec[i - 1] = vec[i];

	}
      vec[n - 1] = x;
      for (int i = 0; i < n; i++)
	{
	  cout << vec[i];
	}
      cout << "\n";
      d--;
    }

}
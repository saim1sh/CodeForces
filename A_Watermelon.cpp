#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
   int n;
   cin >> n;
   int devide = n % 2;
   if (devide == 0 && n > 2)
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }
   return 0;
}
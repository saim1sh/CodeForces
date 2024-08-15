#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
   string str;
   cin >> str;
   int cnt = 0;
   for (auto n : str)
   {
      if (isupper(n))
         cnt++;
   }
   int cnt2 = 0;
   for (auto n : str)
   {
      if (islower(n))
         cnt2++;
   }
   if (cnt2 == cnt || cnt2 > cnt)
   {
      for (int i = 0; i < str.size(); i++)
      {
         str[i] = tolower(str[i]);
      }
      cout << str << endl;
   }
   if (cnt2 < cnt)
   {
      for (int i = 0; i < str.size(); i++)
      {
         str[i] = toupper(str[i]);
      }
      cout << str << endl;
   }
   return 0;
}
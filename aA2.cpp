#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n=s.length();
   for(int i=0;i<n;i++)
   {
       s[i]= s[i]-'a'+'A';
   }
   cout<<s<<endl;
   return 0;
}

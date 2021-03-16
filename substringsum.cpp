Sum of all substrings of a string representing a number | Set 1
#include <bits/stdc++.h>
using namespace std;
int main()
{string s;
cin>>s;
int n=s.length();
vector<int>v(n);
int ans=0;
for(int i=1;i<=n;i++)
{
v[i]=v[i-1]*10+(i)*(s[i-1]-'0');
}
for(int i=0;i<=n;i++)
{
ans=ans+v[i];

}
cout<<ans;

}

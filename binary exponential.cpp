
 #include<bits/stdc++.h>
using namespace std;
# define ll long long int
# define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
# define pb push_back
# define vi vector<int>v;
# define pp pop_back
# define f0(a,b,i) for(int i=a;i<b;i++)
# define f1(a,b,i) for(int i=a;i<=b;i++)
# define pi pair<int,int>
# define fi first
# define sec second


ll power(int a,int b)
{  ll res=1;  
  while(b>0)
{ 
  if(b&1)
   res=res*a;
   a=a*a;
   b>>=1;
}
 return res;
}

int main()
{
  ll a,b;
  cin>>a>>b;
  ll ans=pow(a,b);
  cout<<ans<<endl;
  //it is the function to find a is to power b using binary representation of b.
}
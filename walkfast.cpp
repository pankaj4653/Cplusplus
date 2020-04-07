#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<cmath>
#include<climits>

using namespace std;
typedef long long int ll;


int main()
{
  int t,t1;
  cin>>t;
  ll n,a,b,c,d,p,q,y;
  while(t--)
  {
    cin>>n>>a>>b>>c>>d>>p>>q>>y;
    int arr[n+1];
    for(int i=1;i<=n;i++)
     cin>>arr[i];

     int T = abs(arr[b]-arr[a])*p;
     t1=INT_MAX;

       t1 = abs(arr[a]-arr[c])*p;
       if(t1 <= y)
       {
         t1 = y+(abs(arr[d]-arr[c])*q)+(abs(arr[d]-arr[b])*p);
         cout<<min(T,t1)<<endl;
       }
       else
       cout<<T<<endl;

  }

  return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>

using namespace std;
typedef long long int ll;

int main()
{
  int t;
  cin>>t;
  ll n,k;
  ll sum=0;
  while(t--)
  {
    cin>>n>>k;
    ll arr[n];
    sum=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum = (sum + arr[i])%k;
    }

    cout<<sum<<endl;
  }

  return 0;
}

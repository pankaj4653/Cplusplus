#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long int ll;

int main()
{
 ll t;
 cin>>t;
 ll l,r,k;
 while(t--)
 {
      cin>>l>>r>>k;
      if(l==r)
        cout<<"1"<<endl;
      else
        cout<<k<<endl;
}
return 0;
}

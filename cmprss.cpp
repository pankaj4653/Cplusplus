#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>

using namespace std;
typedef long long int ll;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int a = arr[0];
    
    if(n==1)
    cout<<a;

    int b;
    for(int i=1;i<n;i++)
    {
      if(arr[i]-arr[i-1]==1)
            {
              count++;
              b=arr[i];
            }
      if(arr[i]-arr[i-1]>1 || i==n-1)
            {
              if(count == 0 )
              {
                if(i==n-1)
                cout<<a;
                else
                cout<<a<<",";
                a=arr[i];

              }
              if(count == 1)
              {
                if(i==n-1)
                cout<<a<<","<<b;
                else
                cout<<a<<","<<b<<",";
                a=arr[i];
                count =0;

              }
             if(count>=2)
                {
                  if(i==n-1)
                   cout<<a<<"..."<<b;
                  else
                   cout<<a<<"..."<<b<<",";
                  a=arr[i];
                  count=0;

                }
            if(arr[i]-arr[i-1]>1 && i==n-1)
              {
                cout<<","<<a;
              }

          }
      }
cout<<endl;
}

return 0;
}

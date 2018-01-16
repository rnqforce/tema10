#include <iostream>

using namespace std;

int main()

{
  int n,a[100],x;

  cin>>n>>x;

  for(int i = 0 ; i < n ; i ++)

    cin>>a[i];

  int mij,l,r;
  l=0;r=n-1;
  mij=n/2;
  while(l<r)
  {
      if(x==a[mij])
      {
          cout<<"pozitia lui x="<<mij+1;
          return 0;

       }
       else
          if(x>a[mij])
          {
           l=mij;
           mij=(l+r)/2;
          }
          else{
            r=mij;
            mij=(l+r)/2;
          }


  }

  return 0;
}

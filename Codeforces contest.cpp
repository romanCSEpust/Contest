#include<bits/stdc++.h>
using namespace std;
void roman()
{
  int n; cin>>n;
  if(n==1)
       cout<<"a";
  else if(n==2)
       cout<<"ae";
  else if(n==3)
       cout<<"aei";
       else if(n==4)
       cout<<"aeio";
       else if(n==5)
       cout<<"aeiou";
   else {
       int f=n-5;
       cout<<"aei";

       for(int i=0;i<f;i++)
       {
          if(i%2==0)
              cout<<"i";
          else cout<<"u";
       }

       cout<<"ou";
   }
   cout<<endl;
}
int main()
{
     int t; cin>>t;
     while(t--)
    roman();
}
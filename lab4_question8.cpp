#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int n,num,i,r,arm;
     cout<<"enter n  numbers\n";
     cin>>n;
     cout<<"the armstrong number are ";
     for(i=1;i<=n;i++)
     { 
       num=i;
       while(num!=0)
       {
          r=num%10;
          arm=arm+pow(r,3);
          num=num/10;
       }
       if(i==arm)
          cout<<i<<" ";
     }
     return 0;
}


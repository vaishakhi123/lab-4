#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n);
int main()
{
     int n,i,arm;
     cout<<"enter n  numbers\n";
     cin>>n;
     cout<<"the armstrong number are ";
     for(i=1;i<=n;i++)
     { 
            if(armstrong(i))
                cout<<i<<" ";
     }
     return 0;
}
 int armstrong(int n)
 {
 	  int num,ar=0,r;
 	  num=n;
       while(num!=0)
       {
          r=num%10;
          ar=ar+pow(r,3);
          num=num/10;
       }
       if(ar==n)
          return 1;
        else 
            return 0;
           
     
 }
  

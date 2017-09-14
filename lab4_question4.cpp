#include <iostream>
using namespace std;

int evenodd(int n);

int main() {
	int n;
	cout<<"enter a number\n";
	cin>>n;
	if(evenodd(n)==1)
	   cout<<"the number "<<n<<" is odd";
	else
	    cout<<"the number "<<n<<" is even";
	return 0;
}
int evenodd(int n)
{
	if(n%2==0)
               return (0);
	else
	   return (1);
}
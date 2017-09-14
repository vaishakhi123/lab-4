#include <iostream>
using namespace std;

int sum_of_digits(int n);

int main() {
	int n,s=0;
	cout<<"enter a number\n";
	cin>>n;
	s=sum_of_digits(n);
	cout<<"sum of the digits is "<<s;
	return 0;
}

int sum_of_digits(int n)
{
	int f=0,s=0;
	while(n>0)
	{
		f=n%10;
		n=n/10;
		s=s+f;
	            
	}
	return s;

}
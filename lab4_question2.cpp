#include <iostream>
using namespace std;

	double diameter(double r);
	double circumference(double r);
	double area(double r);
	int main(){
		
	double r;
	cout<<"enter the radius of the circle\n";
	cin>>r;
	double d=0.0,cir=0.0,ar=0.0;
	d=diameter(r);
	cir=circumference(r);
	ar=area(r);
	cout<<"diameter is "<<d<<'\n'<<"circumference is "<<cir<<"\n"<<"area is "<<ar;
	
	return 0;
}
   double diameter(double r)
   {
   	  return(2*r);
   }
   double circumference(double r)
   {
   	 return(2*3.14*r);
   }
   double area(double r)
   {
   	 return(3.14*r*r);
   }
   
   
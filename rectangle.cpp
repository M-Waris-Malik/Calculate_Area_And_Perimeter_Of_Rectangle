#include <iostream>
using namespace std;

int main(){
	double len, wid;
	
	cout<<"Enter length of rectangle: ";
	cin>>len;
	cout<<"Enter width of rectangle: ";
	cin>>wid;
	
	double Area;
	Area = len * wid;
	
	double Perimeter;
	Perimeter = 2 * (len + wid);
	
	cout<<"Area of rectangle = "<<Area<<endl;
	cout<<"Perimeter of rectangle = "<<Perimeter<<endl;
}

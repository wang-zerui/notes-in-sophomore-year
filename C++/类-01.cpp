#include <iostream>
using namespace std;
class Box
{
	public:
		double length;
		double breadth;
		double height;
		double get(void);
		void set(double len, double bre, double hei);
};

double Box::get(void)
{
	return length * breadth * height;
 } 
 
void Box::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	height = hei; 
}

int main()
{
	Box Box1;
	Box Box2;
	Box Box3;
	double volume = 0.0;
	
	Box1.height = 5;
	Box1.length = 6;
	Box1.breadth = 7;
		
	cout<<Box1.get();
	return 0;
}

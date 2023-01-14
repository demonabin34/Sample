#include <iostream>
using namespace std;
class Shape{
	public:
		float getArea(float);
		float getArea(float ,float);
		
};

float Shape::getArea(float r)
{
	return(3.14*r*r);
}

float Shape::getArea(float l,float b)
{
	return(l*b);
}
int main(){
	Shape circle, rectangle;
	float len,bre,rad;
	cout<<"Enter the length and breadth of rectangle "<<endl;
	cin>>len>>bre;
	cout<<"Enter the radius of a circle "<<endl;
	cin>>rad;
	float areaofrectangle = rectangle.getArea(len,bre);
	float areaofcircle = circle.getArea(rad);
	cout<<"the area of rectangle is = "<<areaofrectangle<<endl;
	cout<<"the area of circle is = "<<areaofcircle<<endl;
}



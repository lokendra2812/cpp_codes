//header files included
#include<iostream>

//namespaces include
using namespace std;

//defind Box classe
class Box
{
	private:
		int length,width,height;
	public:
	//constructor to initialize values
	Box(int length,int width,int height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	//function to provide volume
	double getValue()
	{
		return(this->length*this->width*this->height);
	}
};

//main function start
int main(int argc,char *argv[]) // deafualt arguments passing for future inputs
{
	Box b(6,4,2);
	cout<<"Value of box is = "<<b.getValue()<<endl;
	return 0;
}
//end of the program

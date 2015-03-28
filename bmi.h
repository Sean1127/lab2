#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class bmi {
	public:
		float compute(float height, float mass);
		string catagory(float f);
		void setMass(float f);
		void setHeight(float f);
		float getMass();
		float getHeight();
	private:
		float _height;
		float _mass;
};

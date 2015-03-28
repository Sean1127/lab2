#include "bmi.h"
float bmi::compute(float height, float mass)
{
	float value = mass*10000/(height*height);
	return value;
}
string bmi::catagory(float f)
{
	string str;
	if (f < 15)
		str = "Very severely underweight";
	else if (f >= 15 && f < 16)
		str = "Severely underweight";
	else if (f >= 16 && f < 18.5)
		str = "Underweight";
	else if (f >= 18.5 && f < 25)
		str = "Normal";
	else if (f >= 25 && f < 30)
		str = "Overweight";
	else if (f >= 30 && f < 35)
		str = "Obese Class I(Moderately obese)";
	else if (f >= 35 && f < 40)
		str = "Obese Class II(Severely obese)";
	else
		str = "Obese Class III(Very severely obese)";
	return str;
}
void bmi::setMass(float f)
{
	_mass = f;
}
void bmi::setHeight(float f)
{
	_height = f;
}
float bmi::getMass() {
	return _mass;
}
float bmi::getHeight()
{
	return _height;
}

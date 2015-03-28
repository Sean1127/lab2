#include "bmi.h"
using namespace std;
int main()
{
	bmi your;
	float m, h;
	ifstream inFile("file.in", ios::in);
	ofstream outFile("file.out", ios::out);
	while(inFile >> h >> m)
	{
		if (m == 0 && h == 0)
			break;
		your.setMass(m);
		your.setHeight(h);
		float value = your.compute(your.getHeight(), your.getMass());
		string str = your.catagory(value);
		outFile << value << "\t" << str << endl;
	}
	outFile << endl;
	return 0;
}

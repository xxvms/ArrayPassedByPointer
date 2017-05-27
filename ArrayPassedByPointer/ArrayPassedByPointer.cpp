// ArrayPassedByPointer.cpp : Defines the entry point for the console application.
//

#include <iostream>

void centimize(double*, const int);

int main()
{
	const int sizeOfA = 5;

	double varray[sizeOfA] { 10.0, 43.1, 95.9, 59.7, 87.3 };

	centimize(varray, sizeOfA);

	for (int j = 0; j < sizeOfA; j++)	//display new array value
	{
		std::cout << "varray[" << j << "]=" << varray[j] << " centimeters" << std::endl;
	}
	
	system("pause");
    return 0;
}

void centimize(double* ptrd, const int sizeOf)
{
	for (int j = 0; j < sizeOf; j++)	//ptrd point to elements of the varray
	{
		*ptrd++ *= 2.54;
	}

}
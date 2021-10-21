#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"

using namespace std;
int mult(int b, int a) {
	int y;
	y = sqrt(a * b);
	return y;
	
}



int main()
{
	
	int a, b;
	cout << "Enter a b:";
	cin >> a >> b;
	cout << mult(a, b);
	
	

		
	
	
}



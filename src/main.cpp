#include "port.h"

#include <iostream>
using std::cout;
using std::endl;


int main()
{
	cout << " ------------ Port parametric constrtuctor ------------ " << endl;
	Port p1;
	p1.Show();
	cout << p1 << endl << endl;

	Port p2("Gallo", "tawny", 20);
	p2.Show();
	cout << p2 << endl << endl;

	cout << "BottleCount(): " << p2.BottleCount() << endl << endl;

	Port p3("Quinta de la Rosa Vintage", "Quinta Do Noval Nacional Vintage", 15);
	p3.Show();
	cout << p3 << endl << endl;

	cout << " -------------- Port assignment operator -------------- " << endl;
	cout << "Before: " << p1 << endl;
	p1 = p2;
	cout << "After: " << p1 << endl;
	cout << endl;

	cout << " --------------- Port copy constrtuctor --------------- " << endl;
	Port p4(p3);
	cout << p3 << endl;
	cout << p4 << endl;
	cout << endl;

	cout << " --------------- Port +=, -= operators --------------- " << endl;
	cout << "Bottles before: " << p1.BottleCount() << endl;
	cout << "+= 10: " << (p1 += 10) << endl;
	cout << "+= -20: " << (p1 += -20) << endl;
	cout << "+= -20: " << (p1 += -20) << endl;
	cout << endl;
	cout << "-= 20: " << (p1 -= 20) << endl;
	cout << "-= 5: " << (p1 -= 5) << endl;
	cout << "-= -20: " << (p1 -= -20) << endl;
	cout << "Bottles after: " << p1.BottleCount() << endl;

	return 0;
}

#include "port.h"
#include "vintage_port.h"

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
	cout << endl;

	cout << " ---------- VintagePort default constrtuctor ---------- " << endl;
	VintagePort v1;
	v1.Show();
	cout << v1 << endl << endl;

	cout << " -------- VintagePort parametric constrtuctor -------- " << endl;
	VintagePort v2("Taylor's", 10, "Late Bottled", 2012);
	v2.Show();
	cout << v2 << endl << endl;

	cout << " ---------- VintagePort assignment operator ---------- " << endl;
	cout << "Before: " << v1 << endl;
	v1 = v2;
	cout << "After: " << v1 << endl;
	cout << endl;

	cout << " ----------- VintagePort copy constrtuctor ----------- " << endl;
	VintagePort v3(v2);
	cout << v3 << endl << endl;
	cout << endl;

	cout << " =================== Overall tests =================== " << endl;
	Port * port_port = new Port("Ramos Pinto", "tawny", 5);
	Port * port_vport = new VintagePort("Sandeman", 6, "Noble", 2000);
	VintagePort * vport_vport = new VintagePort("Smith Woodhouse", 7, "Old Velvet", 1985);

	cout << "-----   " << *port_port << endl;
	port_port->Show();
	cout << "-----   " << *port_vport << endl;
	port_vport->Show();
	cout << "-----   " << *vport_vport << endl;
	vport_vport->Show();
	cout << endl;

	cout << port_port->BottleCount();
	*port_port += 10;
	cout << " += 10 is " << port_port->BottleCount() << endl;
	cout << port_vport->BottleCount();
	*port_vport += 10;
	cout << " += 10 is " << port_vport->BottleCount() << endl;
	cout << vport_vport->BottleCount();
	*vport_vport += 10;
	cout << " += 10 is " << vport_vport->BottleCount() << endl;
	cout << endl;

	delete port_port;
	delete port_vport;
	delete vport_vport;

	return 0;
}

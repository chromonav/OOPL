#include <iostream>
#include <string>
using namespace std;

void getData(double *p) {
	cout<< "Enter the Number \n";
	cin >> *p;
}
class Error {
	int errorCode;
	string descript;
public :
	Error(int c,string d) {
		errorCode = c;
		descript = d;
	}
	void display() {
		cout<<"There was an Error\nError Code :\n"<<errorCode<<endl<<"Error Description:\n"<<descript;
	}
};
void div(double p, double q) {
	if (q==0.0) {
		if (p==0.0) {
			throw Error(0,"Cannot Divide Zero by Zero");
		}
		else {
			throw Error(1,"Cannot Divide by Zero");
		}
	}
	else {
		cout <<"The Result is \n"<<p/q<<endl;
	}
}
int main() {
	double a,b;
	getData(&a);
	getData(&b);
	try {
		div(a,b);
	}
	catch (Error e) {
		e.display();
	}
}

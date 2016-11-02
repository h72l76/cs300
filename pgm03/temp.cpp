#include <iostream>

using namespace std;


void funcA();
void funcB();
void funcC();

void funcA()
{
	funcB();
	cout<<"A is done. "<<endl;
}

void funcB()
{
	funcC();
	cout<<"B is done. "<<endl;
}

void funcC()
{
	cout<<"C is done. "<<endl;
}

int main()
{
	funcA();
	
	return 0;
}
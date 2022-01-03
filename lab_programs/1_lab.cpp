#include<iostream>
#include<string.h>
using namespace std;
class employeesDetails
{
	public:
	string name;
	int id;
	float salary;
	float it;
	float DA;
	float print()
	{
		float net;
		net=salary+DA-it;
		return net;
	}
};
int main()
{
	employeesDetails e1;
	float net1,net2;

	e1.name = "Akhila" ;
	e1.id = 1288;
	e1.salary = 23000.5;
	e1.it = 3000.4;
	e1.DA = 2000.2;

	employeesDetails e2;
	e2.name = "Aashi";
	e2.id = 23;
	e2.salary = 29000.5;
	e2.it = 5000.7;
	e2.DA = 3000.4;
	cout<<"employee_1 details :"<<endl; 
        cout << "name:"<<e1.name << endl <<"ID :"<< e1.id << endl <<"salry:"<< e1.salary << endl <<"IT:"<< e1.it << endl <<"DA:"<<e1.DA << endl;
	net1=e1.print();
	cout << "Net salary = " <<net1 << endl;
	cout <<"Name:"<< e2.name << "ID"<<e2.id << endl <<"Salary:"<< e2.salary << endl << "IT"<<e2.it << endl << "DA"<<e1.DA << endl;
	net2=e2.print();
	cout << "Net salary of e2 = " <<net2 << endl;

		
	return 0;

}




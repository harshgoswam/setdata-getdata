#include<iostream>
#include<string.h>
using namespace std;
class employ
{
	private:
	int id;
	char name[100];
	char company[100];
	char salary[100];
	char ad[100];
	
	public:
	void setData()
	{

	cout<<"Enter ID->";
	cin>>id;
	cout<<"Enter Name->";
	cin>>name;
	cout<<"Enter Company Name->";
	cin>>company;
	cout<<"Enter Salary->";
	cin>>salary;
	cout<<"Enter Address->";
	cin>>ad;
	
	cout<<endl;

	}
	
	void getData()
	{
	
	cout<<"ID ->"<<id<<endl;
	cout<<"Name ->"<<name<<endl;
	cout<<"Company ->"<<company<<endl;
	cout<<"Salary ->"<<salary<<endl;
	cout<<"Address ->"<<ad<<endl;
	
	cout<<endl;
		
	
	}
	
	
	
	
};

main()
{
   employ e1,e2,e3,e4,e5;
   
   
   	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();

	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
   
   
   
	
}

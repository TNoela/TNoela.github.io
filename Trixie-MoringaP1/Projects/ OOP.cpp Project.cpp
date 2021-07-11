#include <iostream>
#include <stdlib.h>
using namespace std;
void c_Register();//customers registration
void get_Items();
int x;int y;int z;
struct agent_Details
{
	char A_Name[20];
	char Company_Name[30];
	int Id_Number;
	int Age;
}; 
struct land_details
{
	char land_ID[20];
	char Owner_name[20];
	char Size[20];
	float land_Price;
};
struct Apartment_details
{
	char Apartment_ID[20];
	char Owner_name[20];
	char Size[20];
	char floor_no;
	float Apartment_Price;
};
struct House_details
{
	char House_ID;
	char Owner_name[20];
	float House_Price;
	int storeys_no;
};
int main()
{
	int Register;
	cout<<"\nWELCOME TO 'BUY RENT KENYA' WELL KNOWN FOR REAL ESTATE SERVICES "<<endl;
	cout<<"............."<<endl;
	cout<<endl;
	cout<<"Key in 1 if you want to register else any other key to exit."<<endl;
	cin>>Register;
	if (Register==1)
	{
		c_Register();
	}
	else
		exit(0);
	
	get_Items();
	cout<<x<<"This land is on Sale"<<endl;
	cout<<y<<"This house is on Sale"<<endl;
	cout<<z<<"This apartment is on Sale"<<endl;
	return 0;
}

void c_Register()
{	
	struct agent_Details x;
	cout<<"\nKey in agent Name"<<endl;
	cin>>x.A_Name;
	cout<<"Key in agent company name"<<endl;
	cin>>x.Company_Name;
	cout<<"Key on agent national ID Number"<<endl;
	cin>>x.Id_Number;
	cout<<"Key in the age of the agent"<<endl;
	cin>>x.Age;

}
// property information
void get_Items()
{	int num;
	struct land_details l[20];
	struct Apartment_details a[20];
	struct  House_details h[20];
	int choice;
	cout<<"\nThis are some of the properties we deal with:"<<endl;
	cout<<"\n1.LAND\t2.APARTMENT\t3.HOUSE"<<endl;

	cout<<"\nEnter The number Of properties that you are want to deal with"<<endl;
	cin>>num;
	for (int i = 0; i < num; ++i)
	{
		cout<<"\nKey in the number of property you are interested in :"<<endl;
		cout<<"\n 1-LAND\t 2-APARTMENT\t 3-HOUSE"<<endl;
		cin>>choice;

	
	if (choice==1)
	{	
		int p=0;
		x+=1;
		p=x;
		cout<<"\nKey in the owners name"<<endl;
		cin>>l[p].Owner_name;
		cout<<"\nKey in the land ID"<<endl;
		cin>>l[p].land_ID;
		cout<<"\nKey in the size of the land"<<endl;
		cin>>l[p].Size;
		cout<<"\nKey in the price Land to be sold"<<endl;
		cin>>l[p].land_Price;
	}
	else if (choice==2)
	{	
		int s=0;
		y+=1;
		s=y;
		cout<<"\nKey in the Apartment ID"<<endl;
		cin>>a[s].Apartment_ID;
		cout<<"\nKey in the Apartment owners name"<<endl;
		cin>>a[s].Owner_name;
		cout<<"\nKey in the size of the apartment"<<endl;
		cin>>a[s].Size;
		cout<<"\nKey in the Apartment floor number"<<endl;
		cin>>a[s].floor_no;
		cout<<"\nKey in the price of the Apartment"<<endl;
		cin>>a[s].Apartment_Price;
	}			
	else if (choice==3)
	{	
		int k;
		z+=1;
		k=z;
		cout<<"\nKey in the House ID"<<endl;
		cin>>h[k].House_ID;
		cout<<"\nKey in the House owner name"<<endl;
		cin>>h[k].Owner_name;
		cout<<"\nKey in the storeys_no of the house"<<endl;
		cin>>h[k].storeys_no;
		cout<<"\nKey in the Price of the House to be sold"<<endl;
		cin>>h[k].House_Price;
	}
	else
		cout<<"Invalid Input"<<endl;
	}
}


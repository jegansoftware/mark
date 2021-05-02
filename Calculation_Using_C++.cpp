#include<iostream>
using namespace std;

class callon
{ 

private:
	struct student
	{
	
	int a[5];	 
	char name[100];
	
	
	
	};
public:

	struct student ab;
	
	
	void bb()
	{
		int i;
		int sum=0;
	
		cout<<"Enter Your Name:";
		cin>>ab.name;
	
		for(i=1;i<=5;i++)
		{
		
		if(i==1)
			cout<<endl<<"1)Enter Tamil Mark   :";
		else if(i==2)
			cout<<endl<<"2)Enter Enlgish Mark :";
		else if(i==3)
			cout<<endl<<"3)Enter Maths Mark   :";
		else if(i==4)
			cout<<endl<<"4)Enter Science Mark :";
		else if(i==5)
			cout<<endl<<"5)Enter Program Mark :";
			
		cin>>ab.a[i];
	
	
		
		}	 	 
	}
	
	void bc()
	{
	int i;
	int sum=0;
	
	cout<<endl;
	cout<<endl;
	cout<<"Tamilnadu Tenth Students Results"<<endl;
	cout<<"--------------------------------"<<endl;
		cout<<"Name	   :"<<ab.name<<endl;
	for(i=1;i<=5;i++)
	{
	if(i==1)
		cout<<"Tamil    :"<<ab.a[i]<<endl;
	if(i==2)
	   cout<<"English  :"<<ab.a[i]<<endl;
	if(i==3)
	   cout<<"Maths    :"<<ab.a[i]<<endl;
	if(i==4)
	   cout<<"Science  :"<<ab.a[i]<<endl;
	if(i==5)
	   cout<<"Program  :"<<ab.a[i]<<endl;
	   
	 sum+=ab.a[i];
	}
	
		cout<<"Total Mark :"<<sum<<endl;
		for(i=1;i<5;i++)
		{
		if(ab.a[i]<=35)
		{
			cout<<"Result :Fail"<<endl;
			break;
		}
		
		}
	
	
}

};

int main()
{

callon vi;

vi.bb();
vi.bc();

}





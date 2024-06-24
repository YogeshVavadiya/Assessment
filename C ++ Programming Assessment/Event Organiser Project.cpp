//C ++ Programming Assessment Test

#include<iostream>
using namespace std;

class event
{
	//declare variable in protected mode 
	protected:
		string ename,fname,lname;
		int noofminutes,noguest,server;
		float cost1,cost2,costperserver,totalcost,totalfoodcost,avrgcost,DepositAmount;
		double CostPerHour = 18.50, CostPerMinute = 0.40, CostOfDinner = 20.70;
			
}; 
//inherit class using inheritance
class event_calc : event
{
	public:
		//function for get value frome user
	void get()
	{
		cout<<"-------------------Event mangement system-------------------"<<endl<<endl;
		cout<<"Enter name of event : ";
		cin>>ename;
		
		cout<<"Enter Your First Name : ";
		cin>>fname;
		
		cout<<"Enter Your last name : ";
		cin>>lname;
		
		cout<<"Enter no of guest : ";
		cin>>noguest;
		
		cout<<"Enter no of Minutes for booking : ";
		cin>>noofminutes;
	}
	//function for print value
	void display()
	{	
		cout<<endl<<endl<<"-------------------"<<ename<<" Event estimate for "<<fname<<" "<<lname<<"-------------------"<<endl<<endl;
		
		cout<<"No of server Required : "<<server<<endl<<endl;
		cout<<"Cost for one Server is : "<<costperserver<<endl<<endl;
		cout<<"Total cost for food : "<<totalfoodcost<<endl<<endl;
		cout<<"Avrage cost per person : "<<avrgcost<<endl<<endl;
		cout<<"Total cost is : "<<totalcost<<endl<<endl;
		cout<<"Please Deposite a 25% of deposit for reserve this event "<<endl;
		cout<<"The Deposit needed is : "<<DepositAmount<<endl;
	}
	//function for calculate the cost
	void cost()
	{
		
		server = noguest/20;//no of server needed
		
		cost1 = (noofminutes/60) * CostPerHour;//converte frome minute to houre and calculate 
		cost2 = (noofminutes%60) * CostPerMinute;/
		costperserver = cost1 + cost2;//total cost per server 
		
		totalfoodcost = noguest*CostOfDinner;//total food cost
		
		avrgcost = totalfoodcost/noguest;//average food cost per person
		
		totalcost = totalfoodcost + (costperserver * server);//total cost
		
		DepositAmount = totalcost * .25;//deposite amount
	}
};

int main()

{
	//create a object for class
	event_calc obj;
	
	obj.get();//call get function
	obj.cost();//call cost function
	obj.display();//call display function 
	return 0;
}

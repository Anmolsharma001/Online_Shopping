#include<iostream>
using namespace std;
int main()
{
	char startValue;
	char choiceAgain;
	float onlineShopping(void);//prototypes
	startLevel:
	cout<<"please press s to start"<<endl;
	start:
	cin>>startValue;
	if(startValue=='s'||startValue=='S')
	{
		float totalAmount=onlineShopping();	
		cout<<"total billAmount is"<<totalAmount<<endl;
		shopAgain:
		cout<<" Do you want shopping again,y or n"<<endl;
		cin>>choiceAgain;
		if(choiceAgain=='y'||choiceAgain=='Y')	
		{
			goto startLevel;
		}
		else if(choiceAgain=='n'||choiceAgain=='N')
		{
			cout<<"thanks for shopping"<<endl;
		}
		else
		{
		cout<<"you have entered wrong option,please typeAgain"<<endl;
		goto shopAgain;
		}
	}
	else
	{
		cout<<"you have entered wrong option,please s"<<endl;
		goto start;
	}
}
float onlineShopping()
{
	char choice;
	char item;
	float billAmount=0;
	int quantity;
	cout<<"*********Welcome to OnelineShopping**********"<<endl;
	cout<<"--------follow the instruction**********"<<endl;
	
	cout<<"(1) please enter a to order airbuds"<<endl;
	cout<<"(2) please enter m to order mobile phones"<<endl;
	cout<<"(3) please enter l to order laptop "<<endl;
	cout<<"(4) please enter s to order speaker"<<endl;
	cout<<"(5) please enter h to order headphones"<<endl;
	cin>>choice;
	
	//**************************Airbuds*****************************//	
	 if(choice=='a'|| choice=='A')
	{
		AirbudsLevel:
		cout<<"Airbuds details"<<endl;
		cout<<"(1) Realme  =>price : 4000"<<endl;
		cout<<"(2) Earboss =>price : 3500"<<endl;
		cout<<"(3) Noise   =>price : 2500"<<endl;
		cout<<"(4) Boats   =>price : 2200"<<endl;
		cout<<"(5) Truke   =>price : 2000"<<endl;	
		cout<<"please enter your choice"<<endl;
		cin>>item;	
		if(item=='1')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*4000;	
		}
		else if(item=='2')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*3500;	
		}
			else if(item=='3')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*2500;	
		}
			else if(item=='4')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*2200;	
		}
			else if(item=='5')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*2000;	
		}
		else
		{
			cout<<"your have entered wrong option,please type agains"<<endl;
			goto AirbudsLevel;
		}
	}
//**************************Mobile*****************************//	
  else if(choice=='m'|| choice=='M')
	{
		mobileLevel:
		cout<<"Mobile details"<<endl;
		cout<<"(1) Apple   =>price : 40000"<<endl;
		cout<<"(2) Vivo    =>price : 38000"<<endl;
		cout<<"(3) Samsung =>price : 25000"<<endl;
		cout<<"(4) Readme  =>price : 20000"<<endl;
		cout<<"(5) Poco    =>price : 27000"<<endl;	
		cout<<"please enter your choice"<<endl;
		cin>>item;	
		if(item=='1')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*40000;	
		}
		else if(item=='2')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*38000;	
		}
			else if(item=='3')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*25000;	
		}
			else if(item=='4')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*20000;	
		}
			else if(item=='5')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*27000;	
		}
		else
		{
			cout<<"your have entered wrong option,please type agains"<<endl;
			goto mobileLevel;
		}
	}
	
	//**************************laptop*****************************//	
	 else if(choice=='l'|| choice=='L')
	{
		LaptopLevel:
		cout<<"laptop details"<<endl;
		cout<<"(1) Asus   =>price : 50000"<<endl;
		cout<<"(2) Hp     =>price : 45000"<<endl;
		cout<<"(3) Dell   =>price : 55000"<<endl;
		cout<<"(4) Victus =>price : 80000"<<endl;
		cout<<"(5) Apple  =>price : 120000"<<endl;	
		cout<<"please enter your choice"<<endl;
		cin>>item;	
		if(item=='1')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*50000;	
		}
		else if(item=='2')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*45000;	
		}
			else if(item=='3')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*55000;	
		}
			else if(item=='4')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*80000;	
		}
			else if(item=='5')
		{
			cout<<"enter the quantity "<<endl;
			cin>>quantity;
		  billAmount=billAmount+quantity*120000;	
		}
		else
		{
			cout<<"your have entered wrong option,please type agains"<<endl;
			goto LaptopLevel;
		}
	}
	return billAmount;
}

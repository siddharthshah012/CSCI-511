#include "Periodic.h"

#include <iostream>
#include <conio.h>



Periodic::Periodic(string call_number3,string title3,	string subjects3, string author3 ,
	string description3, string publisher3 , string publishing_history3 , string series3, 
	string notes3, string related_titles3, string ofot3, string govNum3):Media(call_number3, title3,subjects3, notes3)
{
	//call_number = call_number3;
	//subjects = subjects3;
	author = author3;
	description = description3;
	publisher = publisher3;
	publishing_history= publishing_history3 ;
	related_titles = related_titles3;
	series = series3;
	//notes = notes3;
	ofot = ofot3 ;
	govNum = govNum3;

	
}

void Periodic::display() const
{
	cout<<"PERIODIC"<<endl;
	Media::display();
	cout<<"Author    :"<<author<<endl;
	cout<<"decription    :"<<description<<endl;
	cout<<"Publisher    :"<<publisher<<endl;
	cout<<"publishing_history    :"<<publishing_history<<endl;
	cout<<"related_titles    :"<<related_titles<<endl;
	cout<<"Series    :"<<series<<endl;
	cout<<"ofot    :"<<ofot<<endl;
	cout<< "govNum    :"<< govNum<<endl;


}

bool Periodic::compare_other(const string& ss)
{
	//int i = -1;
	if (std::string::npos != notes.find(ss) || std::string::npos != series.find(ss) || std::string::npos != related_titles.find(ss)||std::string::npos != description.find(ss))
	{
		//if (i >= 0)
		return true;
		
	}
	else
		return false;
	//if (/*std::string::npos != */series.find(ss))
	//{
	//	if (i >= 0)
	//		return true;
	//	//else
	//		//return false;
	//}

	//if (/*std::string::npos != */related_titles.find(ss))
	//{
	//	if (i >= 0)
	//		return true;
	//	//else
	//		//return false;
	//}

	//if (/*std::string::npos != */description.find(ss))
	//{
	//	if (i >= 0)
	//		return true;
	//	else
	//		return false;
	//}
	
}


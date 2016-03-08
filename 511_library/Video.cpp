#include "Video.h"

#include <iostream>
#include <conio.h>



Video::  Video (string call_number4,string title4,	string subjects4,
	string description4, string distributor4 , string notes4 , 
	string series4,string label4 ):Media(call_number4, title4,subjects4, notes4)
{
	//call_number = call_number4;
	//title= title4;
	//subjects = subjects4 ;
	description = description4 ;
	distributor = distributor4;
	//notes = notes4;
	series = series4;
	label = label4;
}

void Video::display() const
{
	cout<<"VIDEO"<<endl;
	Media::display();
	cout<<"Description     :"<<description<<endl;
	cout<<"Distributor    :"<<distributor<<endl;
	cout<<"Series   :"<<series<<endl;
	cout<<"label    :"<<label<<endl;
}


bool Video::compare_other(const string& ss) 
{
	//int i = -1;
	if (std::string::npos != description.find(ss)||std::string::npos != notes.find(ss)|| std::string::npos != distributor.find(ss))
	{
		return true;

	}
	else
		return false;
	
	/*if (std::string::npos != distributor.find(ss))
	{
		if (i >= 0)
			return true;
		else
			return false;
	}

	if (std::string::npos != notes.find(ss))
	{
		if (i >= 0)
			return true;
		else
			return false;
	}*/
}




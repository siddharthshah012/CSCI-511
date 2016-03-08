#include "Film.h"

#include <iostream>
//#include <conio.h>



Film::Film (string call_number2,string title2, string subjects2, string year2, 
	string director2, string notes2):Media(call_number2, title2, subjects2, notes2)
{
	//call_number = call_number2;
	//title = title2;
	//subjects = subjects2;
	year= year2;
	director = director2;
	//notes = notes2;

}

void Film::display() const
{
	cout<<"FILM"<<endl;
	Media::display();
	cout<<"year   :"<<year<<endl;
	cout<<"Director   :"<<director<<endl;
}

bool Film::compare_other(const string& ss)
{
	//int i = -1;
	if (std::string::npos != notes.find(ss) || std::string::npos != director.find(ss) || std::string::npos != year.find(ss))
	{
		
			return true;
		
	}
	else
			return false;
	
	/*if (std::string::npos != director.find(ss))
	{
		if (i >= 0)
			return true;
		else
			return false;
	}

	if (std::string::npos != year.find(ss))
	{
		if (i >= 0)
			return true;
		else
			return false;
	}*/
}


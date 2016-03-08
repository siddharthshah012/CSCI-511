#include "Books.h"
#include <iostream>

using namespace std;


Books::Books(string call_number1,string title1,	string subjects1, string author1 ,
	string description1, string publisher1 , string city1 , string year1,
             string series1, string notes1):Media(call_number1, title1,subjects1, notes1)
{
     author = author1;
     description = description1;
     publisher = publisher1;
     city = city1;
     year = year1;
     series = series1;
}

void Books::display() const
{
	//int a;
	//cout<<"Call number"<<call_number<<endl;
	//cout<<"Title"<<title<<endl;
	//cout<<"Subjects"<<subjects<<endl;
	//cout<<"Notes"<<notes<<endl;
	cout<<"BOOK"<<endl;
	Media::display();
	cout<<"Author    :"<<author<<endl;
	cout<<"Description    :"<<description<<endl;
	cout<<"Publisher    :"<<publisher<<endl;
	cout<<"City   :"<<city<<endl;
	cout<<"Year    :"<<year<<endl;
	cout<<"Series   :"<<series<<endl;


	//cin>>a;
}

bool Books::compare_other(const string& ss)
{
	int i = -1;
	if (std::string::npos != notes.find(ss)||std::string::npos != description.find(ss)||std::string::npos != year.find(ss))
	{
		if (i >= 0)
			return true;
		else
			return false;
	}
	
	/*if (std::string::npos != description.find(ss))
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


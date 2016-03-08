#include <sstream>
#include <string>
#include "Media.h"
#include<iostream>

using namespace std;


Media::Media()
{
    
}

Media::~Media()
{
    
}
Media::Media(string call_number1, string title1, string subjects1, string notes1)
{
    call_number = call_number1;
    title = title1;
    subjects = subjects1;
    notes = notes1;
}
bool Media::compare_title(const string& ss)
{
	int i= -1;


	//while (true)
	//{
		//cout<<"Title "<<title<<endl;
		i = title.find( ss );
		//cout<<"i: "<<i<<endl;
		if (i >= 0)
		{
			//i++;
			//cout<<"found"<<endl;
			return true;
		}
		else 
			return false;
	//}	
}

bool Media::compare_call_number(const string& ss1)
{
	int i= -1;


	//while (true)
	//{
		//cout<<"Title "<<title<<endl;
		i = call_number.find( ss1 );
		//cout<<"i: "<<i<<endl;
		if (i >= 0)
		{
			//i++;
			//cout<<"found"<<endl;
			return true;
		}
		else 
			return false;
	//}	
}

bool Media::compare_subjects(const string& ss2)
{
	int i= -1;


	//while (true)
	//{
		//cout<<"Title "<<title<<endl;
		i = subjects.find( ss2 );
		//cout<<"i: "<<i<<endl;
		if (i >= 0)
		{
			//i++;
			//cout<<"found"<<endl;
			return true;
		}
		else 
			return false;
	//}	
}


//bool Media::compare_call_number(const string& ss)
//{
//	int i= 0;
//
//	while (true)
//	{
//		i = call_number.find( ss  , ++i);
//		if (i != std::string::npos)
//		{
//			i++;
//			cout<<"found"<<endl;
//			return true;
//		}
//		else false;
//	}	
//}
//
//bool Media::compare_subjects(const string& ss)
//{
//	int i= 0;
//
//	while (true)
//	{
//		i = subjects.find( ss, ++i);
//		if (i != std::string::npos)
//		{
//			i++;
//			cout<<"found"<<endl;
//			return true;
//		}
//		else false;
//	}	
//}

void Media::display() const
{

	cout <<"Call Number  : "<<call_number<<endl;
	cout <<"Titles   :"<<title<<endl;
	cout << "Subjects  :" <<subjects<<endl;
	cout<<"Notes    :"<< notes <<endl;
}
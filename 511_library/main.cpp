/************************************************
AUthor :- Siddharth Shah
Date :- 9/15/2015



************************************************/

//#include "Books.h"
#include "SearchEngine.h"
#include "Media.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
void display_main(vector<Media*> list);
void processCommand();


int main()
{
    //cout<<"Main.cpp"<<endl;
	
	string ss;
	processCommand();

	
	
	//Books bk("one ","two","three","four","five","six","seven","eight","nine","ten");

	//bk.display();
	//string s = "wo";
	//bk.compare_title(s);
	

	return 0;

}

void processCommand()
{
	SearchEngine se;
	//string option1 = "Title";
	//string option2 = "Number";
	//string option3 = "subject";
	//string option4 = "other";
	string input_title;
	string input_number;
	string input_subject;
	string input_other;
	string command;
	string yesNo;
	


	cout<<"Enter the option You want to search by:"<<"\n"<<"1. Title"<<"\n"<<"2. Number"<<"\n"<<"3. Subjects"<<"\n"<<"4. other"<<endl;
	cin>> command;
	

	if (command == "Title")
	{
		cout<< "Enter the title to be searched"<<endl;
		cin>>input_title;
		//se.search_by_title(input_title);
		vector<Media*> list = se.search_by_title(input_title);
		display_main(list);
		//compare_title(input_title);
	}
	else if (command == "Number")
	{
		cout<< "Enter the Call Number to be searched"<<endl;
		cin>>input_number;
		//se.search_by_call_number(input_title);
		vector<Media*> list = se.search_by_call_number(input_number);
		display_main(list);
	}
	else if (command == "Subjects")
	{
		cout<< "Enter the Subjects to be searched"<<endl;
		cin>>input_subject;
		//se.search_by_subjects(input_title);
		vector<Media*> list = se.search_by_subjects(input_subject);
		display_main(list);
	}
	else if (command == "Other")
	{
		cout<<"Enter data to be searched"<<endl;
		cin>>input_other;
		vector<Media*> list = se.search_by_others(input_other);
		display_main(list);
	}

	cout<<"Do you Wish to continue 'yes' / 'no' ?"<<endl;
	cin>>yesNo;
	
	if (yesNo == "yes")
	{
		processCommand();
	}
	else if (yesNo == "no")
	{

		exit(0);
	}
	//return input_title;
}

void display_main(vector<Media*> list )
{
	//int a;
	for (int i = 0 ; i < (int)list.size();i++)
	{
		list[i]->display();
		cout<<"Sizee    ::"<<list.size()<<endl;
	}
}
#ifndef PERIODIC_H
#define PERIODIC_H


#include <sstream>
#include <string>
#include "Media.h"

using std::ifstream;
using namespace std;


class Periodic : public Media
{
private:
	
	string author;
	string description;
	string publisher;
	string publishing_history;
	string series;
	string related_titles;
	string ofot;
	string govNum;
	
	



public:
	Periodic (string ,string ,	string , string  ,
	string , string  , string  , string , 
	string , string, string , string );

	void display() const;
	bool compare_other(const string& ss);

	//void main1();

};

#endif
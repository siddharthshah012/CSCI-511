#ifndef BOOKS_H
#define BOOKS_H


#include <sstream>
#include <string>
#include "Media.h"

using std::ifstream;
using namespace std;


class Books : public Media
{
private:
	
	string author;
	string description;
	string publisher;
	string city;
	string year;
	string series;

public:
	Books (string ,string ,	string , string  ,
	string , string  , string  , string , 
	string , string );

	void display() const;
	bool compare_other(const string& ss);
	

	//void main1();

};

#endif
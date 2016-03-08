#ifndef MEDIA_H
#define MEDIA_H

#include <sstream>
#include <string>
//#include"Books.h"

//using std::ifstream;
using namespace std;

class Media
{
protected:                         
	string call_number;
	string title;
	string subjects;
	string notes;

public:
    Media();
    Media(string, string, string, string);
    virtual ~Media();
	virtual void display() const = 0;
	bool compare_title(const string& ss);
	bool compare_subjects(const string& ss);
	bool compare_call_number(const string& ss);
	virtual bool compare_other(const string& ss) = 0;
};


#endif
#ifndef FILM_H
#define FILM_H


#include <sstream>
#include <string>
#include "Media.h"

using std::ifstream;
using namespace std;


class Film : public Media
{
private:
	
	
	string year;
	string director;
	
	



public:
	Film (string ,string ,	string , string  ,
	string , string );

	void display() const;
	bool compare_other(const string& ss);

	//void main1();

};

#endif
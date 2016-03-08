#ifndef VIDEO_H
#define VIDEO_H


#include <sstream>
#include <string>
#include "Media.h"

using std::ifstream;
using namespace std;


class Video : public Media
{
private:
	
	//string author;
	string description;
	string distributor;
	//string city;
	//string year;
	string label;
	string series;
	
	



public:
	Video (string ,string ,	string , string  ,
	string , string  , string  , string );

	void display() const;
	
	bool compare_other(const string& ss);

	//void main1();

};
#endif

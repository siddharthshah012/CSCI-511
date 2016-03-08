#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H


#include <iostream>
//#include<conio>
#include"Media.h"
#include"Books.h"
#include "Film.h"
#include"periodic.h"
#include "Video.h"
#include <vector>

using namespace std;


class SearchEngine
{
private:
	
	std::vector <Media*> CardCatalog;
	
	//vector <Media*> temp;
	//string add;
public:
    SearchEngine();
	~SearchEngine();
    void display();
	void initialize_books();
	void initialize_film();
	void initialize_Video();
	void initialize_Periodic();
	
	vector <Media*> search_by_title(const string& ss) const;
	vector <Media*> search_by_call_number(const string& ss1 ) const;
	vector <Media*> search_by_subjects(const string& ss2) const;
	vector <Media*> search_by_others(const string& ss3) const;
};

#endif
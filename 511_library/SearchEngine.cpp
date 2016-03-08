#include "SearchEngine.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
//#include "Media.h"
#include <conio.h>


using namespace std;

SearchEngine::SearchEngine()
{
    initialize_books();
	initialize_film();
	initialize_Video();
	initialize_Periodic();
	
}

SearchEngine::~SearchEngine()
{
	for (int i=0; i<CardCatalog.size();i++)
	{
		delete CardCatalog[i];
	}
}

void SearchEngine::initialize_books()
{
	
	ifstream inf ("book.txt");
	string cn;
	string ti;
	string su;
	string au;
	string ds;
	string pb;
	string ct;
	string yr;
	string sr;
	string nts;
	//string

    //cout<<"Before while"<<endl;
    while (getline(inf, cn, '|'))
	{
		//getline(inf, cn, '|');
		getline(inf, ti, '|');
		getline(inf, su, '|');
		getline(inf, au, '|');
		getline(inf, ds, '|');
		getline(inf, pb, '|');
		getline(inf, ct, '|');
		getline(inf, yr, '|');
		getline(inf, sr, '|');
		getline(inf, nts, '\n');


		//cout << cn << ", " << ti <<", " << su <<", " << au <<", " << ds <<", " <<
		//pb <<  ", " << ct << ", " << yr << ", " <<sr << ", " <<nts << ", "<<endl;
        
        Books* temp = new Books (cn,ti,su,au,ds,pb,ct,yr,sr,nts);
        
        
        CardCatalog.push_back(temp);
       // cout<<"Printing things"<<endl;

	}
	inf.close();
            //display();
}

void SearchEngine::initialize_film()
{
	ifstream inf ("film.txt");
	string cn;
	string ti;
	string su;
	string di;
	string nts;
	string yr;

	while (getline(inf, cn, '|'))
	{
		//getline(inf, cn, '|');
		getline(inf, ti, '|');
		getline(inf, su, '|');
		getline(inf, di, '|');
		getline(inf, nts, '|');
		getline(inf, yr, '\n');


		Film* temp = new Film (cn,ti,su,di,nts,yr);
		CardCatalog.push_back(temp);
	}
	inf.close();

}


void SearchEngine::initialize_Periodic()
{
	ifstream inf ("periodic.txt");
	string cn;
	string ti;
	string su;
	string au;
	string de;
	string pu;
	string ph;
	string sr;
	string nts;
	string rt;
	string ofti;
	string goNu;

	while (getline(inf, cn, '|'))
	{
		//getline(inf, cn, '|');
		getline(inf, ti, '|');
		getline(inf, su, '|');
		getline(inf, au, '|');
		getline(inf, de, '|');
		getline(inf, pu, '|');
		getline(inf, ph, '|');
		getline(inf, sr, '|');
		getline(inf, nts, '|');
		getline(inf, rt, '|');
		getline(inf, ofti, '|');
		getline(inf, goNu, '\n');

		Periodic* temp = new Periodic(cn,ti,su,au,de,pu,ph,sr,nts,rt,ofti,goNu);
		CardCatalog.push_back(temp);
	}

	inf.close();
}

void SearchEngine::initialize_Video()
{
	ifstream inf("video.txt");
	string cn;
	string ti;
	string sb;
	string ds;
	string di;
	string nts;
	string sr;
	string la;

	while (getline(inf, cn, '|'))
	{
		
		getline(inf, ti, '|');
		getline(inf, sb, '|');
		getline(inf, ds, '|');
		getline(inf, di, '|');
		getline(inf, nts, '|');
		getline(inf, sr, '|');
		getline(inf, la, '\n');

		Video* temp = new Video(cn,ti,sb,ds,di,nts,sr,la);

		CardCatalog.push_back(temp);
	
	
	}
	inf.close();
}




/*void SearchEngine::display()
{
    for(int i = 0; i < (int)CardCatalog.size(); i++)
    {
        cout<<"Call number: "<<CardCatalog[i]->call_number<<endl;
        cout<<"Author: "<<CardCatalog[i]->title<<endl;
    }
}*/


vector<Media*> SearchEngine::search_by_title(const string& ss) const
{
	bool answer;
	std::vector <Media*> results;
	for (unsigned int i=0; i < CardCatalog.size(); i++)
	{
		answer = CardCatalog[i]->compare_title(ss);
		if (answer == true)
		{
			results.push_back(CardCatalog[i]);  
		}

	}
	return results;
}


vector<Media*> SearchEngine::search_by_call_number(const string& ss1) const
{
	bool answer;
	std::vector <Media*> results;
	for (unsigned int i=0; i < CardCatalog.size(); i++)
	{
		answer = CardCatalog[i]->compare_call_number(ss1);
		if (answer == true)
		{
			results.push_back(CardCatalog[i]);  
		}

	}
	return results;
}

vector< Media*> SearchEngine::search_by_subjects(const string& ss2) const
{
	bool answer;
	std::vector <Media*> results;
	for (unsigned int i=0; i < CardCatalog.size(); i++)
	{
		answer = CardCatalog[i]->compare_subjects(ss2);
		if (answer == true)
		{
			results.push_back(CardCatalog[i]);  
		}

	}
	return results;
}


vector< Media*> SearchEngine::search_by_others(const string& ss3) const
{
	bool answer ;
	std::vector <Media*> results;
	for (unsigned int i=0 ; i < CardCatalog.size();i++)
	{
		answer = CardCatalog[i]->compare_other(ss3);

		if(answer == true)
		{
			results.push_back(CardCatalog[i]);
		}

	}
	return results;

}
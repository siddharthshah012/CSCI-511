#ifndef STREAMSOURCE_H
#define  STREAMSOURCE_H

#include <fstream>
#include <string.h>
#include "BufferedFile.h"

using namespace std;

class StreamSource
{
  private:
    BufferedFile bf;
    string search_const;
    string replace_const;
    int replacement_count;
    int search_origin;
    int search_count;
    int string_length;
    bool search_get;
    bool replacement_get;
    string search_word;
    string repl;


  public:
    StreamSource(string search_word, string repl, string file);
    //~StreamSource();
    bool currently_replacing();
    void matched_search_string();
    bool eof();
    StreamSource& get(char& ch);
    void put(char ch);
    void found_partial_match(int match_count,char ch);
};

#endif

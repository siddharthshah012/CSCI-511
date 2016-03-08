#ifndef BUFFEREDFILE_H
#define BUFFEREDFILE_H



#include <stdio.h>
#include <string>
#include <fstream>
#include <unistd.h>
#include <deque>
#include "TrackingDeque.h"

using namespace std;

class BufferedFile
{
  private:
    TrackingDeque <char > myqueue;
    fstream infile;
    streampos getter;
    streampos putter;
    //int maxSize;
    bool file_eof;
   std::string file;

  public:
    BufferedFile(string fname);
    //BufferedFile();
    ~BufferedFile();
    void do_over(char ch);
    void put(char ch);
    BufferedFile& get(char& ch);
    bool eof();
};
#endif

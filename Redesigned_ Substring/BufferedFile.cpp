#include "BufferedFile.h"

#include <fstream>
#include <string>

//using namespace std;


BufferedFile::BufferedFile(string fname)
  :infile(fname.c_str(),ios::in | ios::out), file(fname),
  putter(0),getter(0), file_eof(false)
{
}

BufferedFile::~BufferedFile()
{
  infile.close();
   truncate(file.c_str(),(int)putter);
}

void BufferedFile::do_over(char ch)
{
  myqueue.push_front(ch);
}

void BufferedFile::put(char ch)
{
  char extra_ch;
  if (getter == putter)
  {
    if (!file_eof)
     {
        infile.seekg(getter);
        extra_ch = infile.get();
        getter+=1;
        myqueue.push_back(extra_ch);
     }
  }

  infile.seekp(putter);
   if (infile.tellp() == -1)
   {
      infile.clear();
      file_eof = true;
   }
  infile.put(ch);

  putter+=1;
  return;
}

BufferedFile& BufferedFile::get(char& ch)
{
  char ch1, temp;
  if (!myqueue.empty())
  {
    ch =myqueue.front();
     myqueue.pop_front();

  }
  else
  {
    infile.seekg(getter);
    ch = infile.get();
     //std::cout << ch;
    getter+=1;
  }
   if (infile.tellp()== -1)
   {
      infile.clear();
      file_eof = true;
   }
   
   return *this;
}


bool BufferedFile::eof()
{
  if (!myqueue.empty())
  {
    return false;
  }
  else
    return file_eof;
}

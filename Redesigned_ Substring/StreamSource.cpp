#include "StreamSource.h"
#include <string>

//using namespace std;

StreamSource::StreamSource(string search_word, string repl , string file ):
replacement_count(0),search_count(0),string_length(0),search_origin(0),bf(file),
search_const(search_word),replace_const(repl),replacement_get(false),search_get(false)
{
}

bool StreamSource::currently_replacing()
{
  return replacement_get;
}

void StreamSource::matched_search_string()
{
  string_length = replace_const.length();
  replacement_count = replace_const.length();

}

StreamSource& StreamSource::get (char& ch)
{
  if (search_count > 0)
  {
    //get char from search_word;
    ch = search_const[string_length - search_count--];
    //search_count = search_count - 1;
    search_get = true;
  }

  else if (replacement_count > 0)
  {
    //get char from replace_const
    ch = replace_const [string_length - replacement_count --];
    //replacement_count = replacement_count-1;
    replacement_get = true;
  }

  else
  {
    replacement_get = false;
    search_get = false;
    bf.get(ch);
  }
  return *this;
}
void StreamSource::put(char ch)
{
  bf.put(ch);
}


void StreamSource::found_partial_match(int count, char ch)
{
  if (search_get)
  {
    ++search_origin;
  }
  else
  {
    search_origin = 0;
    string_length = count;
    bf.do_over(ch);
  }
  put(search_const[search_origin]);
  search_count=string_length - 1 - search_origin;
}

bool StreamSource::eof()
{
  if (replacement_get == true || search_get == true)
  {
    return false;
  }
  else
    return bf.eof();
}

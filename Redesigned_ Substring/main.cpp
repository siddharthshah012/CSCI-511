#include <fstream>
#include "StreamSource.h"
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
  /* code */
  //char* file;
  char ch;
  string search_word = static_cast <string> (argv[1]);
  string repl = static_cast <string> (argv[2]);
  //file = argv[3];
  string file = static_cast < string > (argv[3]);

  StreamSource ss(search_word, repl, file);

  //how many characters in the search
  //string we've matched
  int match_count=0;

  while(!ss.get(ch).eof())
  {
    if(!ss.currently_replacing() && ch==search_word[match_count])
    {
      ++match_count;
      if(match_count < search_word.length())
        continue;
    }
    if(match_count == search_word.length())
      //we should start getting characters from replacement string
      ss.matched_search_string();
    else if(match_count > 0)
      //we should start getting characters from the search string
      ss.found_partial_match(match_count, ch); //ch is our pushback
    else
      ss.put(ch);
    match_count = 0;
  }

  //return 0;
}

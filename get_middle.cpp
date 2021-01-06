#include <iostream>
#include <curses.h>
using namespace std;

string get_middle(std::string);

int main() {

	string de;
	while(cin >> de) {

		string kk = get_middle(de);
		cout << kk;
	}

	return 0;
}

string get_middle(string input) 
{
  int len = input.length();
  int len2 = len / 2;
  string ch;
  if(len & 1)
    ch[0] = input[len2];
  else {

  	ch[0] = input[len2 - 1];
  	ch[1] = input[len2];
  }
   
   cout << len;
  return ch;
}

#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    string str = "geeksforgeeks a computer sciencegeeks";
    string s[2]="string";
    // Only search first 5 characters of "geeks.practice"
    size_t found = str.find("geeks.practice", 0, 6);
    // if (found != string::npos)
    //     cout << found << endl;
//   if ((found = str.find('.')) <= str.length())
    cout << "1. " << str.find('.') << "\n";
    cout << str.length();
    return 0;
}
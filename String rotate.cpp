/*
 Problem #1: String Rotation
 Write a function which checks if one string is a rotation of other string.

 if s1 = "helloworld" then the following are some of its rotated versions:
 elloworldh
 lloworldhe
 loworldhel
 oworldhell
 worldhello
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    if (argc < 3)
    {
        cout << "You passed in only " << argc << "argument(s). 3 is needed" << endl;
    }

    /*cout << "Those arguments are: " << endl;
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";*/

    string s = argv[1];
    string test = argv[2];

    // Find first occurrence of "geeks"
    size_t found = test.find(s[0]);

    if (found == string::npos)
    {
        cout << "no" << endl;
        exit(0);
    }

    // substring 1 from start of s to n
    string s1 = test.substr(0, found);
    // substring 2 from n to end of test
    string s2 = test.substr(found, test.length());

    if (s == s2 + s1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

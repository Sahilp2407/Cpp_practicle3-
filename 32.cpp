#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Take any string 
    string s1= "Sahil";
    // copy two characters of s1 (starting
    // from index 3 )
    string r = s1.substr(3,2);
    // print the result
    cout <<"string is:"<<r;
    return 0;
}
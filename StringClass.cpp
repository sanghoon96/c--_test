#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str1 = "Hello", str2 = "World", str3;
    int len;
    str3 = str1; // copy str1 into str3
    cout << "str3 : " << str3 << endl;
    // str3 : Hello

    str3 = str1 + str2; // concatenates str1 and str2
    cout << "str1 + str2 : " << str3 << endl;
    // str1 + str2 : HelloWorld

    len = str3.size(); // total length of str3 after concatenation
    cout << "str3.size() : " << len << endl;
    // str3.size() : 10
    return 0;
}

/*
c++ library provides a string class type that supports all the operations mentioned char array[], additionally much more functionallity.
*/
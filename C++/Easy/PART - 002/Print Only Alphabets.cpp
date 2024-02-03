#include <bits/stdc++.h>
 
using namespace std;

string OnlyAlpha(string &input){
    string result;
    for(const char &ch : input){
        if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z')) result += ch;
    }
    return result;
}

int main(int argc, char** argv)
{
    string input;
    getline(cin, input);
    cout << OnlyAlpha(input);

}
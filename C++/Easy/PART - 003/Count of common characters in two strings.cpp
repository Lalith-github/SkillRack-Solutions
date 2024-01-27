#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    
    char ch[26] = {0};
    
    for(const char &c : str1){
        ch[c - 'a'] = 1;
    }
    int count = 0;
    for(const char &c: str2){
        if(ch[c - 'a'] == 1){
            count ++;
            ch[c-'a'] = 0;
        }
    }
    cout << count;
}
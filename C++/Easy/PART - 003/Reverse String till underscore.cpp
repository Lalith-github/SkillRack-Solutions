#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string input;
    getline(cin, input);
    string result("");
    int indexUnderscore = -1;
    for (int i=0;i < input.length();i++){
        if (input[i] == '_') {
            indexUnderscore = i;
            break;
        }
    }
    if(indexUnderscore >= 0){
        for(int i=indexUnderscore-1; i>=0;i--){
            result += input[i];
        }
        for(int i=indexUnderscore; i<input.length(); i++) result += input[i];
    }
    else {
        for(int i=input.length()-1;i>=0;i--) result += input[i];
    }
    cout << result;

}
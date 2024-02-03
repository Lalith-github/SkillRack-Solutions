#include <bits/stdc++.h>
 
using namespace std;


int main(int argc, char** argv)
{
    string input;
    getline(cin, input);
    
    for(int i=input.length();i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if (input[i] == input[j]){
                cout << input[i];
                return 0;
            }
        }
    }

}
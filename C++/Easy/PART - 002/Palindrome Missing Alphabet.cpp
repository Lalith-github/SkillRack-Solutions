#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string input;
    cin >> input;
    
    int length = input.length()-1;
    
    for(int i=0; i<length;i++){
        if (input[i] == input[length]){
            length --;
        }else if (input[i+1] == input[length]){
            cout << input[i];
            break;
        }else {
            cout << input[length];
            break;
        }
    }

}
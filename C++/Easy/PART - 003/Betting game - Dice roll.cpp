#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string input, word;
    getline(cin, input);
    int x, y;
    cin >> x>> y;
    int sum = 0;
    stringstream s(input);
    
    while(s >> word){
        int num = stoi(word);
        if (num % 2==0) sum -=y;
        else sum += x;
    }
    cout << sum;

}
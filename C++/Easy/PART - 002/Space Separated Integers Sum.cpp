#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream s(input);
    string word;
    while(s >> word){
        arr.push_back(stoi(word));
    }
    
    int sum = 0;
    for(const int &value : arr){
        sum += value;
    }
    cout << sum;

}
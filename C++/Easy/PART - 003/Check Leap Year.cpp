#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int year;
    cin >> year;
    
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 !=0)) cout << "yes";
    else cout << "no";

}
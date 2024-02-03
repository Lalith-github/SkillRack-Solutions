#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int headcount, legcount;
    cin >> headcount >> legcount;
    
    cout << abs((legcount - (4*headcount))/2)<< " ";
    cout << abs((legcount - (2 *headcount))/2);

}
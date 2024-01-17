#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x1, y1, x2, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    
    float x = (x1 + x2) / 2;
    float y = (y1 + y2)/2;
    setprecision(1);
    cout << x << endl << y;

}
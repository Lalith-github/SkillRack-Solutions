#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int left, right;
    char op;
    scanf("%d%c%d", &left, &op, &right);
    
    int result;
    op = tolower(op);
    switch(op){
        case 'a':
            result = left + right;
            break;
        case 's':
            result = left - right;
            break;
        case 'm':
            result = left * right;
            break;
        case 'd':
            result = left / right;
            break;
    }
    cout << result;

}
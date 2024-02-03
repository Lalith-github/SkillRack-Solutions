#include <bits/stdc++.h>
 
using namespace std;

typedef struct _Time{
    int hour;
    int minute;
} Time;

Time createTime(string input){
    int hour = 0;
    int minute = 0;
    bool done = false;
    int i =0;
    for(const char &c : input){
        if (c == ':'){
            done = true;
        }else if (!done){
            hour = hour * 10 + int(c - '0');
        }else {
            minute = minute * 10 + int(c - '0');
        }
    }
    return {hour, minute};
}

int main(int argc, char** argv)
{
    string input, word;
    getline(cin, input);
    
    stringstream s(input);
    int count = 0;
    while(s >> word){
      Time t = createTime(word);
      int minutes = (t.hour * 60 ) + t.minute;
      
      if (minutes > 600) count ++;
    }
    cout<< count;

}
#include <bits/stdc++.h>
 
using namespace std;

struct Car{
    string name;
    float mileage;
};

Car format(const string &input){
    string name("");
    string mileage;
    bool done = false;
    for(const char &ch :input){
        if(ch == '@') done = true;
        else if (!done){
            name += ch;
        }else mileage += ch;
    }
    Car result;
    result.name = name;
    result.mileage = stof(mileage);
    return result;
}

int main(int argc, char** argv)
{
    string input, word;
    getline(cin, input);
    
    stringstream stream(input);
    
    float min = FLT_MAX;
    string minCar;
    while(stream >> word){
        Car car = format(word);
        if (car.mileage < min){
            min = car.mileage;
            minCar = car.name;
        }
    }
    cout << minCar;

}
#include <bits/stdc++.h>
 
using namespace std;

bool checkDivisible(int arr[], int n, int check){
    for(int i=0;i<n;i++){
        if (arr[i] % check != 0) return false;
    }
    return true;
}

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int max = *max_element(arr, arr + n);
 
    int count = 0;
    for(int i=2;i<max;i++){
        if (checkDivisible(arr, n, i)) count ++;
    }
    
    cout << count;

}
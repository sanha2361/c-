
#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int sum = 0;
    for (int a : arr)
        sum += a;
    

    //cout << "square = "<< score << endl;
    cout << "total = "<< sum << endl;
    return 0;
}
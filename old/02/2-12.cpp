#include<iostream>

using namespace std;


int main(){
    int a = 10;
    int *ptr;

    ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 20;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}
#include<iostream>

using namespace std;

int main(){
    
    const double p1 = 3.14;
    double radius;

    cout<< "raidus:";
    cin >> radius;
    double area = radius * radius * p1;
    cout << "square = "<< area << endl;
    return 0;
}
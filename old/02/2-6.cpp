// total에 에러가 남
#include<iostream>

using namespace std;

int main(){
    int val,total = 0;
    
    for (int i = 0; i <10 ; i++){
        cin >> val;
        total += val;
        cout << "total"<<i<<":"<< total << endl;
    }

    //cout << "square = "<< score << endl;
    cout << "last total = "<< total << endl;
    return 0;
}
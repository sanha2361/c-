#include<iostream>

using namespace std;

int main(){
    int score;
    char grade;

    cout<< "score:";
    cin >> score;
    
    switch(score/10){

        case 9: grade = 'A';
                break;
        default: grade = 'F';
                break;
    }

    //cout << "square = "<< score << endl;
    cout << "grade = "<< grade << endl;
    return 0;
}
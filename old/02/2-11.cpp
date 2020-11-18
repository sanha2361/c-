//error 생김

# include "circle.h"
# include <iostream>
using namespace std;

int main(){
    C2dType c = {10,10};
    cout << c.x << endl;

    CircleClass c1,c2;
    c1.init(0,0,10);
    //c1.radius = 10;//접근 에러
    cout << c1.area() <<endl;
    //c2.init(30,10,5);

    //c1.display();

    return 0;
}
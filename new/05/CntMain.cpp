#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
Counter cnt; // Counter 객체의 정의
cnt.reset(); // 계수기를 0으로 지움
cout << "present value : " << cnt.getValue() << endl;
cnt.count(); // 계수기를 1 증가시킴
cnt.count();
cout << "value : " << cnt.getValue() << endl;
return 0;
}

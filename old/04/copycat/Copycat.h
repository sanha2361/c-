#ifndef COPYCAT_H_INCLUDED
#define COPYCAT_H_INCLUDED

#include <iostream>
#include <cstring>
using namespace std;


class Copycat {
    char *name;
public:
    Copycat(const char *n){
      name = new char[strlen(n)+1];
      strcpy(name,n);
    }
    Copycat(const Copycat &cc){
      name = new char[strlen(cc.name)+1];
      strcpy(name,cc.name);
    }
    ~Copycat(){
        delete [] name;
    }
    void whoRU() const {
        cout << "I am " << name  <<endl;
    }
};

#endif
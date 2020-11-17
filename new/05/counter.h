#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED


class Counter {
    int value;
    public:
    Counter()
        { value = 0; }
    //Counter() : value{0} { } //초기화 리스트
    void reset()
        { value = 0; }
    void count()
        { ++value; }
    int getValue() const
        { return value; }
};

#endif
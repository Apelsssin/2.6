#pragma once
class Counter {
private:
    int i;
public:
    Counter() {
        i = 1;
    }
    Counter(int i) {
        this->i = i;
    }
    int inc();
    int dec();
    int get();
};

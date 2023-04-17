#include "Counter.h"

int Counter::inc() {
    return ++i;
}
int Counter::dec() {
    return --i;
}
int Counter::get() {
    return i;
}
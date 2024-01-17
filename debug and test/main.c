#include "counter.h"

int main(void)
{
    struct Counter* c = createCounter();
    increment(c);
}
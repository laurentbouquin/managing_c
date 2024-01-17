#include <assert.h>

#include "counter.h"

int main(void)
{
    struct Counter* myCounter = createCounter();
    assert(myCounter != NULL);
    //assert(myCounter->value == 0);

    assert(getValue(myCounter) == 0);
    int oldValue = getValue(myCounter);
    increment(myCounter);
    assert(oldValue == getValue(myCounter) - 1);

    return EXIT_SUCCESS;
}
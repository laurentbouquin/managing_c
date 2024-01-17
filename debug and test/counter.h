#include <stdlib.h>
#include <stdbool.h>

struct Counter {
    int value;
};

struct Counter * createCounter(void)
{
    struct Counter * c = (struct counter*)malloc(sizeof(struct Counter));
    c->value = 0;

    return c;
}

void increment(struct Counter * c)
{
    c->value++;
}

int getValue(struct Counter * c)
{
    return c->value;
}

bool isZero(struct Counter * c)
{
    return c->value == 0;
}

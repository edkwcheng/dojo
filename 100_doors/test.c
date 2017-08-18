#include "door.h"
#include <assert.h>
#include <stdio.h>

static void life_the_universe_and_everything(void)
{
    assert(door_faster() == 0);
}

int main(void)
{
    life_the_universe_and_everything();
    // green-traffic light pattern...
    puts("All tests passed");
}


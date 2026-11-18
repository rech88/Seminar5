#include <stdio.h>
#include <assert.h>

#include "week.h"

void testNumOfDay() {
    assert(numOfDay("wed") == 3);
    assert(numOfDay("Fri") == 5);
    assert(numOfDay("mon") == 1);
    assert(numOfDay("sun") == 7);
    assert(numOfDay("tue") == 2);
    assert(numOfDay("Sat") == 6);
}

void involidTestNumOfDay(){
    assert(numOfDay("krakazabra") == -1);
}

int main() {

    testNumOfDay();
    involidTestNumOfDay();
    
    printf("All tests complited!");
}
#include <stdio.h>

#include "week.h"

#define THREE 3

int main() {
    char day[THREE];
    scanf("%s", &day);

    printf("%d", numOfDay(day));
}
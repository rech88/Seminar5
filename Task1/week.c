#include <string.h>

#include "week.h"

int numOfDay (char* day) {
    if(!strcmp(day, "Mon") || !strcmp(day, "mon")) {
        return(1);
    }
    if(!strcmp(day, "Tue") || !strcmp(day, "tue")) {
        return(2);
    }
    if(!strcmp(day, "Wed") || !strcmp(day, "wed")) {
        return(3);
    }
    if(!strcmp(day, "Thu") || !strcmp(day, "thu")) {
        return(4);
    }
    if(!strcmp(day, "Fri") || !strcmp(day, "fri")) {
        return(5);
    }
    if(!strcmp(day, "Sat") || !strcmp(day, "sat")) {
        return(6);
    }
    if(!strcmp(day, "Sun") || !strcmp(day, "sun")) {
        return(7);
    }

    return(-1);
}

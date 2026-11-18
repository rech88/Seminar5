
#include <stdlib.h>

#include "records.h"

void addRecord(Record** recArr, Record* newRecord, int* len, int* top) {
    if (*top < *len) {
        (*recArr)[*top] = *newRecord;
        (*top)++;
    } else {
        *recArr = realloc(*recArr, (sizeof(Record) * (*len + 3)));
        *len += 3;
        (*recArr)[*top] = *newRecord;
        (*top)++;
    }
}

int compare_records(const void *a, const void *b) {
    Record arg1 = *(const Record *)a;
    Record arg2 = *(const Record *)b;
    if (arg1.id < arg2.id) return -1;
    if (arg1.id > arg2.id) return 1;
    return 0;
}

#pragma once

typedef struct Record {
    int id;
    char value[7];
} Record;

void addRecord(Record** recArr, Record* newRecord, int* len, int* top);

int compare_records(const void *a, const void *b);

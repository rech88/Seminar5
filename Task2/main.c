#include <stdio.h>
#include <stdlib.h>
#include "records.h"

int main() {
    Record* recordsArr = (Record*)malloc(sizeof(Record)*3);
    
    int len = 3;
    int top = 0;

    int n;
    scanf("%d", &n);

    Record newRecord;
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &newRecord.id, newRecord.value);
        addRecord(&recordsArr, &newRecord, &len, &top);
    }
    
    qsort(recordsArr, top, sizeof(Record), compare_records);
    for (int i = 0; i < top; i++) {
        printf("%d %s\n", recordsArr[i].id, recordsArr[i].value);
    }
}
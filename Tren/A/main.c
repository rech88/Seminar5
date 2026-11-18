#include <stdio.h>
#define MOD 1000000007 
#define MAX_SIZE 100

typedef struct Steck {
    int data[MAX_SIZE];
    int top;
} Steck;

void push(Steck *s, int val) {
    s->data[++(s->top)] = val;
}

int pop(Steck *s) {
    return (s->data[s->top--]);
}

int main() {
    Steck s = {{0}, -1};
    char hex_char;
    
    while (scanf(" %c", &hex_char) == 1) {
         int cmd = (hex_char >= 'A') ? (hex_char - 'A' + 10) : (hex_char - '0');

         if ((cmd & 1) == 1) {
            push(&s, cmd>>1);
         } else {
            if (s.top != -1) {
                printf("%d\n", ((pop(&s)*2) % MOD));

            }
         }
    }
}
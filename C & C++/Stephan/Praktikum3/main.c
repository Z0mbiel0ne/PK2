/* 
 * File:   main.c
 * Author: Klimek
 *
 * Created on 24. Juli 2017, 09:46
 */

#include <stdio.h>
#include "queue.h"

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Aufgabe 1\n");
    printf("%c", to_upper_case('Y'));
    printf("\n");
    printf("%c", to_upper_case('o'));
    printf("\n");
    printf("%c", to_upper_case('l'));
    printf("\n");
    printf("%c", to_upper_case('0'));

    printf("\n\n Aufgabe 2\n");
    upper("sdoif hasdfASDFO sadjfiosahdfsdfSA fu23954r#qr AT4a 9t8#");

    printf("\n\n Aufgabe 3\n");
    enqueue(1);
    enqueue(2);
    enqueue(2);
    printf("%i ", dequeue());
    enqueue(3);
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    enqueue(4);
    enqueue(5);
    printf("%i ", dequeue());
    printf("%i \n", dequeue());
}

char to_upper_case(char c) {
    if (c >= 97 && c <= 122) {
        c -= 32;
    }
    return c;
}

void upper(char t []) {
    int i = 0;
    while (t[i]) {
        printf("%c", to_upper_case(t[i]));
        i++;
    }
}
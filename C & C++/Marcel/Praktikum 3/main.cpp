/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Scholz
 *
 * Created on 24. Juli 2017, 10:38
 */

#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <algorithm>

using namespace std;

char to_upper_case(char c) {
    if (c >= 97 && c <= 122) {
        return c - 32;
    }
    return 32;
}

void upper(char text[]) {
    int i = 0;
    while (text[i] != '\0') {
        text[i] = to_upper_case(text[i]);
        i++;
    }
}

int array[2] = {};

void enqueue(int i) {
    int modul = i % 2;
    while (array[modul] != 0 && modul <= sizeof (array) / sizeof (array[0])) {
        modul++;
    }
    array[modul] = i;
}

int dequeue() {
    int i = 0;
    while (array[i] != 0) {
        i++;
    }
    int back = array[i];
    array[i] = 0;
    return back;
}

/*
 * 
 */
int main(int argc, char** argv) {

    char c = 'c';
    printf("%c", to_upper_case(c));

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


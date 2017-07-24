/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Scholz
 *
 * Created on 24. Juli 2017, 12:20
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

int countspace(char s[]) {
    int i = 0;
    int counter = 0;
    while (s[i] != '\0') {
        if (s[i] == 32) {
            counter++;
        }
        i++;
    }

    return counter;
}

double min(double a[], int n) {
    double min = 0.0;
    int i = 0;
    for (i; i < n; i++) {
        if (i == 0) {
            min = a[i];
        }

        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

char* stringcat(const char* str1, const char* str2) {
    int i = 0;
    int counter = 1;
    while (*(str1 + i)) {
        counter++;
        i++;
    }

    i = 0;
    while (*(str2 + i)) {
        counter++;
        i++;
    }

    char *newarray = (char*) malloc(sizeof (counter * sizeof (char)));
    counter = 0;
    
    i = 0;
    while (*(str1 + i)) {
        newarray[counter++] = str1[i++];
    }

    i = 0;
    while (*(str2 + i)) {
        newarray[counter++] = str2[i++];
    }

    newarray[counter] = '\0';
    
    return newarray;
}

/*
 * 
 */
int main(int argc, char** argv) {
//    char test[] = "Hal lo";
//    printf("%d", countspace(test));
//
//    double a[5] = {1.0, 2.0, 3.0, 0.5, 6.0};
//    printf("%f", min(a, 5));

    char d[] = "Hallo ";
    char e[] = "Test";
//
//    char *b = d;
//    char *c = e;

    printf("%s", stringcat(d, e));

}


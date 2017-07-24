/* 
 * File:   main.c
 * Author: Klimek
 *
 * Created on 24. Juli 2017, 12:22
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Aufgabe 1\n");
    char text[] = "Anzahl der im Text enthaltenden leerzeichen: ";
    printf("Index: %s%d\n", text, countspaceIdx(text));
    printf("Pointer: %s%d\n", text, countspacePtr(text));
    printf("\n");

    printf("Aufgabe 2\n");
    double numbers[] = {2.1, 1.8, 7.9, 4.7, 3.0, 2.7, 1.1, 9.4, 3.8, 1.9};
    printf("Minimum: %f\n", min(numbers, 10));
    printf("\n");

    printf("Aufgabe 3\n");
    printf("%s\n", stringcat("Hans und ", "Klaus Heisler"));
}

int countspaceIdx(char s[]) {
    int i = 0, c = 0;
    while (s[i]) if (s[i++] == 32) c++;
    return c;
}

int countspacePtr(char s[]) {
    char *p = s;
    int c = 0;
    while (*p) if (*p++ == 32) c++;
    return c;
}

double min(double a[], int n) {
    if (n == 0) return 0.0;
    int i = 0, min = i;
    while (++i < n) if (a[i] < a[min]) min = i;
    return a[min];
}

char *stringcat(const char* str1, const char* str2) {
    const size_t len1 = strlen(str1);
    const size_t len2 = strlen(str2);
    char *result = malloc(len1+len2+1);
    memcpy(result, str1, len1);
    memcpy(result+len1, str2, len2+1);
    return result;
}

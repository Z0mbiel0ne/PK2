/* 
 * File:   main.c
 * Author: Klimek
 *
 * Created on 24. Juli 2017, 11:30
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define SIZE 2

typedef enum {
    belegt,
    frei,
    geloescht
} status;

typedef struct {
    int inhalt;
    status status;
} data;

data array[SIZE];

void init() {
    int i = 0;
    
    while (i < SIZE) {
        array[i].status = frei;
        i++;
    }
}

int hash(int a) {
    return a % SIZE;
}

int insert(int a) {
    int hashwert = hash(a);
    
    if (array[hashwert].status != belegt) {
        array[hashwert].inhalt = a;
        array[hashwert].status = belegt;
        return 1;
    } else {
        int pos = hashwert;
        
        if (++hashwert >= SIZE) {
            hashwert = 0;
        }
        
        while (hashwert != pos) {
            if (array[hashwert].status != belegt) {
                array[hashwert].inhalt = a;
                array[hashwert].status = belegt;
                return 1;
            }
            
            if (++hashwert >= SIZE) {
                hashwert = 0;
            }
        }
    }
    return 0;
}

int delete(int a) {
    int hashwert = hash(a);
    
    if (array[hashwert].status == belegt && array[hashwert].inhalt == a) {
        array[hashwert].status = geloescht;
        return 1;
    } else {
        int pos = hashwert;
        
        if (++hashwert >= SIZE) {
            hashwert = 0;
        }
        
        while (hashwert != pos) {
            if (array[hashwert].status == belegt && array[hashwert].inhalt == a) {
                array[hashwert].status = geloescht;
                return 1;
            }
            
            if (++hashwert >= SIZE) {
                hashwert = 0;
            }
        }
    }
    return 0;
}

int member(int a) {
    int hashwert = hash(a);
    
    if (array[hashwert].status == belegt && array[hashwert].inhalt == a) {
        return 1;
    } else {
        int pos = hashwert;
        
        if (++hashwert >= SIZE) {
            hashwert = 0;
        }
        
        while (hashwert != pos) {
            if (array[hashwert].status == belegt && array[hashwert].inhalt == a) {
                return 1;
            }
            
            if (++hashwert >= SIZE) {
                hashwert = 0;
            }
        }
    }
    return 0;
}

int main(int argc, char** argv) {
    init();
    printf("%d\n", insert(1));
    printf("%d\n", insert(3));
    printf("%d\n", delete(3));
    printf("%d\n", insert(5));
    printf("%d\n", member(5));
}


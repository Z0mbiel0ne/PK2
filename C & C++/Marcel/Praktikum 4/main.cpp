/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Scholz
 *
 * Created on 24. Juli 2017, 11:31
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

int array[2];
int size = sizeof(array)/sizeof(array[0]);

int insert(int i){
    int modul = i % size;
    
    i = 0;
    while(array[modul] != 0)
    {
        i = i + 2;
        if(i < size-1)
        {
            i = i % size;
        }
    }
    array[modul] = i;
}

int del(int i)
{
    
}

int member(int i)
{
    int modul = i % size;
    
    i = 0 ;
    int found = 0;
    while(!found)
    {
        if(array[modul] == i){
            return 1;
        }
        else
        {   
            if(array[modul] == 0)
            {
                return 0;
            }
            
                    i = i + 2;
                if(i < size-1)
                {
                    i = i % size;
                }
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    printf("%d\n", insert(1));
    printf("%d\n", insert(3));
    printf("%d\n", del(3));
    printf("%d\n", insert(5));
    printf("%d\n", member(5));

}


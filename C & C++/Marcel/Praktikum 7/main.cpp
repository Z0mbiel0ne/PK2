/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Scholz
 *
 * Created on 24. Juli 2017, 14:09
 */

#include <cstdlib>
#include <cstddef>

using namespace std;

class Element
{
    private:
        char value;
        Element* next;
    public:
        Element(char value): value{value}, next{nullptr}{};
        Element(char value, Element* next): value{value}, next{next}{};
        ~Element();
};

    class LinkedList {
    private:
        Element *first;
        Element *last;
    public:
        LinkedList();
        int append(const char* text);
        int insert(const char* text, int p);
        int remove(int p);
        const char *get(int p);
        int index_of(const char *text);
        const char *getfirst();
        const char *getlast();
        void visit_all(void (*work)(const char* t));
        ~LinkedList();

    };

    LinkedList::LinkedList()
    {

    }

    /*
     * 
     */
    int main(int argc, char** argv)
    {
        return 0;
    }


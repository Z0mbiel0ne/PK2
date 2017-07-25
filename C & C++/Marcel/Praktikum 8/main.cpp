/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Marcel
 *+
 * Created on 22. Juli 2017, 13:20
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

class Medium
{
    private:
        static int ID;
        int const id;
        string titel;
        int jahr;
    
    public:
        Medium(string titel, int jahr) : titel{titel}, jahr{jahr}, id{ID}{ID++;};
        int alter(){ return 2016-jahr;};
        void virtual druckeDaten() = 0;
        virtual ~Medium(){};
        int getID(){return id;}
        string getTitel(){return titel;};
        int getJahr(){return jahr;};

};

int Medium::ID = 0;

class Audio : public Medium
{
    public: 
        Audio(string titel, int jahr) : Medium(titel, jahr){}
        void druckeDaten(){
            cout << "ID: " << getID() << " Titel: " << getTitel() << " Jahr: "<< getJahr() << endl;  
        }
        virtual ~Audio() {};

};

class Bild : public Medium
{
    private:
        string ort;
    public:
        Bild(string titel, int jahr, string ort): Medium(titel, jahr), ort{ort}{}
        string getOrt(){return ort;}
        void druckeDaten(){
            cout << "ID: " << getID() << " Titel: " << getTitel() << " Jahr: "<< getJahr() << " Ort: " << getOrt();  
        }
        virtual ~Bild() {}

};

int main(int argc, char** argv) 
{
    int SIZE = 10;
    
    for (int i = 0; i < SIZE; i++) {
        Medium* a = new Audio("Test", 1997 + i);
        a->druckeDaten();
        free(a);
    }
}

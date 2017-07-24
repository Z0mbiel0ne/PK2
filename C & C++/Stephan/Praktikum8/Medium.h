/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medium.h
 * Author: Klimek
 *
 * Created on 24. Juli 2017, 16:29
 */

#ifndef MEDIUM_H
#define MEDIUM_H
#include<string>

class Medium {
public:
    Medium();
    Medium(const Medium& orig);
    virtual ~Medium();
    int alter();
    virtual void druckeDaten();
private:
    const int id;
    static int idCounter;
    std::string titel;
    int jahr;
};

#endif /* MEDIUM_H */


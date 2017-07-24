/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medium.cpp
 * Author: Klimek
 * 
 * Created on 24. Juli 2017, 16:29
 */

#include "Medium.h"

Medium::Medium() : id{idCounter} {
    idCounter++;
}

Medium::Medium(const Medium& orig) {
    
}

Medium::~Medium() {
}

int Medium::idCounter = 0;
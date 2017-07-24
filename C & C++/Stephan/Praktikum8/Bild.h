/* 
 * File:   Bild.h
 * Author: Klimek
 *
 * Created on 24. Juli 2017, 16:39
 */

#ifndef BILD_H
#define BILD_H

class Bild : public Medium {
public:
    Bild();
    Bild(const Bild& orig);
    virtual ~Bild();
private:
    std::string ort;
};

#endif /* BILD_H */


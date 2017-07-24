/* 
 * File:   Audio.h
 * Author: Klimek
 *
 * Created on 24. Juli 2017, 16:39
 */

#ifndef AUDIO_H
#define AUDIO_H

class Audio : public Medium {
public:
    Audio();
    Audio(const Audio& orig);
    virtual ~Audio();
private:
    string interpret;
    int dauer;
};

#endif /* AUDIO_H */


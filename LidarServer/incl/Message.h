/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Message.h
 * Author: kiriazis
 *
 * Created on September 30, 2018, 6:47 PM
 */


#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
#include <string>

class Message {
public:
    Message();
    Message(const Message& orig);
    virtual ~Message();
private:

protected:
    std::string message;
};

#endif /* MESSAGE_H */


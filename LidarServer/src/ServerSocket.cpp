/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ServerSocket.cpp
 * Author: kiriazis
 * 
 * Created on October 16, 2018, 11:00 PM
 */

#include "ServerSocket.h"

ServerSocket::ServerSocket() : Socket() {

}

ServerSocket::ServerSocket(const ServerSocket& orig) {
}

ServerSocket::ServerSocket(int descriptor, Type t){
	
}

void ServerSocket::bindd(){
	
	if ( bind(socket_descriptor,(struct sockaddr *) &socket_struct,sizeof(socket_struct)) == -1 ){
		std::cout<<"Error at bind";
	}
}

void ServerSocket::listenn(){
	if ( listen(socket_descriptor, 250) == -1 ){
		std::cout<<"Error at listen";
	}

}

int ServerSocket::acceptt(){
	int connection_descriptor;
    socklen_t peer_size=sizeof(struct sockaddr_in);
    connection_descriptor = accept(socket_descriptor, (struct sockaddr *) &socket_struct,&peer_size);  
    return connection_descriptor;
}

void ServerSocket::receiveData()
{
}

void ServerSocket::sendData(std::string data)
{
	
}
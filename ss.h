//
// Created by Jonathan Rust on 10/20/15.
//

#ifndef ANONYMOUS_WEB_GET_SS_H
#define ANONYMOUS_WEB_GET_SS_H


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <stdint.h>

/**
 * @args port - Port to connect to. If no port is passed as a command line
 * argument, 0 will be passed.
 */
void server(unsigned short port);

/**
 * The IP address and port for the server to connect to is determined by "host_list.txt"
 * If there are no remaining hosts to connect to, the client will initiate file retrieval
 */
void client(char* next_ss_info, char* url);

/**
 * Reads host_list.txt
 * @return - The line containing the IP address and port of the host to connect to.
 * If there are no other remaining hosts int the file, NULL is returned.
 */
char* getNextSteppingStone();

/**
 * Removes the current host from host_list.txt
 */
void removeCurrentHost(int num_ss);

/**
 * @return - The IP address of the local machine
 */
char* getCurrentIP();


/*
 * Parses the IP address from a line matching the format of host_list.txt
 * @return - An IP address
 */
char* parseIP(char *line);

char* parsePort(char* line);

int generateRandomNumber(int num_ss);

char* getRandomSS();

uint32_t getFileLength(char * filename);



#endif //ANONYMOUS_WEB_GET_SS_H

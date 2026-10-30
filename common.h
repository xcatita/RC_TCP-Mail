#ifndef COMMON_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>

#define ERROR_STATUS -1

const char COMMAND_END_CHAR = '\n';
const char FILE_TYPE[] = "FILE";

typedef struct {
    
} LineReader;

#endif
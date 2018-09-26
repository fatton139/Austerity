#ifndef AUSTERITY_H
#define AUSTERITY_H

#include <unistd.h>
#include <fcntl.h>

#include "shared.h"
#include "util.h"

#define NORMAL 0
#define WRONG_ARG_NUM 1
#define BAD_ARG 2
#define CANNOT_ACCESS_DECK_FILE 3
#define INVALID_DECK_FILE 4
#define BAD_START 5
#define CLIENT_DISCONNECT 6
#define PROTOCOL_ERR 7
#define SIGINT_RECIEVED 10

enum Argument {
    TOKENS = 1,
    WIN_POINTS = 2,
    DECK_FILE = 3
};

/**
 * Function Prototypes
 **/
void check_args(int, char **);
void checkDeckFile(char **);
void exit_with_error(Game *, int);
Deck load_deck(char *);

#endif
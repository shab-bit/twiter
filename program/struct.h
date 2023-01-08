#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct head /*head of users*/
{
    struct User *linker; /*just a link*/
} head;
typedef struct poster /*post strucher for save written posts*/
{
    char *body;     /*words of post*/
    int id;         /*id*/
    int like;       /*number of likes*/
    int liker[150]; /*id of likers*/
    struct poster *linker;
} poster;
typedef struct User /*the main strucher for add users*/
{
    int id;                /*number of user*/
    char *name;            /*name of user*/
    char *coder;           /*password*/
    struct poster *poster; /*firt post*/
    struct User *linker;   /*next user*/
} User;
User *whois = NULL; /*basic values*/
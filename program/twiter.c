#include "struct.h"
#include "namecode.h"
#include "deletpost.h"
#include "finder.h"
#include "info.h"
#include "like.h"
#include "post.h"
#include "login.h"
#include "sighnup.h"
#include "show.h"
int main()
{
    head.linker = NULL;      /*null first of head*/
    char *name, *code;       /*basic values*/
    char order[10] = {'12'}; /*order places*/
    while (order[0] != '0')  /*loop for program*/
    {
        show(name, code, order); /*main branch of code and place fo decisin what should do*/
    }
}
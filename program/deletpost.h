int deletpost(char *name, User *whois)
{
    poster *sw = whois->poster; /*basic values*/
    if (sw->id == postid)       /*check for first post*/
    {
        whois->poster = whois->poster->linker; /*destroy first post*/
        free(sw);                              /*free the space*/
        postid = 0;                            /*diable erore*/
    }
    else
    {
        for (; sw->linker; sw = sw->linker)
        {
            if (sw->linker->id == postid)
            {
                poster *help = sw->linker;       /*basic values*/
                sw->linker = sw->linker->linker; /*destroy post*/
                free(help);                      /*free the space*/
                postid = 0;                      /*diable erore*/
                break;
            }
        }
    }
    if (postid) /*call for empyty post*/
    {
        printf("\nWE DONT HAVE ENY POST WITH THIS ID ; PLEASE CHOASE A REAL ONE\n\t\t\t\t\tPRESS ENTER FOR COANTINUE\n");
    }
    else
    {
        printf("\nYOUR POST DELETED :) \n\t\t\t\t\tPRESS ENTER FOR COANTINUE\n"); /*call for done*/
    }
    getchar();
}
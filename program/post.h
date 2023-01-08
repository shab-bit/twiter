int post(User *whois, char *name)
{
    if (whois) /*check for login*/
    {
        poster *posti = whois->poster; /*basick values*/
        if (posti)                     /*check for exist post*/
        {
            for (; posti->linker;) /*worming in post until last one*/
            {
                posti = posti->linker; /*wormer*/
            }
            posti->linker = (poster *)malloc(sizeof(poster));                                     /*give space*/
            posti->linker->id = ((posti->id) + 1);                                                /*make id*/
            posti->linker->linker = NULL;                                                         /*close the linker*/
            printf("if--> %p != %p  , id = %d", posti->linker, whois->poster, posti->linker->id); /*show the profail*/
        }
        else /*make first post*/
        {
            posti = (poster *)malloc(sizeof(poster)); /*give space*/
            posti->id = 1;                            /*make id*/
            posti->linker = NULL;                     /*close the linker*/
            whois->poster = posti;                    /*make the start of posts*/
        }
        posti->body = (char *)malloc(sizeof(char) * strlen(swap1)); /*give space*/
        strcpy(posti->body, swap1);
        printf("\nYOUR POST SAVED AND CAN BE LIKE BY USERS\n\t\t\t\t\tPRESS ENTER FOR COANTINUE\n"); /*call for done*/
        posti->liker[0] = 0;
        getchar();
    }
    else
    {
        printf("\n!!!!!! YOU DIDNT LOGIN TO YOUR ACCONT ;)\n \t\t\t\t\tPLEASE USE --> login \"name\" \"password\" ;\n PRESS ENTER FOR COUNTINUE");
        getchar();
        return 0;
    }
}
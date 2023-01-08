int like(char *name, char *code, User *whois)
{
    if (whois) /*check for login*/
    {
        User *userfind = head.linker; /*basic valuse*/
        int finded = 12;
        if (userfind) /*check for exist eny user*/
        {
            for (; userfind;) /* go forward in users*/
            {
                if (!strcmp(userfind->name, swap1)) /*finding the name of selected username*/
                {
                    poster *findpost = userfind->poster; /*basic values*/
                    finded = 0;
                    if (findpost)
                    {
                        for (; findpost;) /*going forward in posts*/
                        {
                            if (findpost->id == postid) /*find post id*/
                            {
                                for (int i = 0, finded = 14; findpost->liker[i] != 0; i++) /*find id of liker for bann*/
                                {
                                    if (findpost->liker[i] == whois->id)
                                    {
                                        /**/
                                        finded = 123; /*user banned from like*/
                                        break;
                                    }
                                }
                                if (finded == 123) /*call for bann*/
                                {
                                    printf("\nYOU CANT LIKE A POST TWO TIME :( PLEASE PAY ATTENTION \n\t\t\t\t\t--> PRESS ENTER FOR COUNTINUE \n");
                                }
                                else /*first time liker*/
                                {
                                    (findpost->like)++;                                                      /*increase number of likes*/
                                    printf("\nlikes = %d , body = |%s| \n", findpost->like, findpost->body); /*show the post*/
                                    for (int i = 0; 2; i++)                                                  /*add user to likers*/
                                    {
                                        if (findpost->liker[i] == 0) /*end of list finder*/
                                        {
                                            findpost->liker[i] = whois->id;                                                       /*id adder*/
                                            findpost->liker[i + 1] = 0;                                                           /*carry one step forward end of list*/
                                            printf("\nYOU LiKED THE POST CORRECTLY\n\t\t\t\t\t--> PRESS ENTER FOR COUNTINUE \n"); /*call for done*/
                                            break;                                                                                /*call for done*/
                                        }
                                    }
                                }
                                finded = 0; /*disable next calls*/
                                break;
                            }
                            findpost = findpost->linker;
                        }
                        if (!findpost)
                        {
                            printf("\nYOUR USER DONT HAVE ENY POST WITH THIS ID\n\t\t\t\t\t--> PRESS ENTER FOR COUNTINUE \n");
                            finded = 0;
                        }
                    }
                    else /*no post exist*/
                    {
                        printf("\n!!!!!! YOUR USER WHAT YOU WANT TO LIKE DONT HAVE ENY POST !!!!!\n\t\t\t\t\t--> PRESS ENTER FOR COUNTINUE \n");
                    }
                    break;
                }
                userfind = userfind->linker; /*going forward*/
            }
            if (!userfind) /*incorrect username*/
            {
                printf("\nDIDNT FINDE ENY USER MATCH WITH YOU INSERT :( \n \t\t\t\t\t\t\tPLEASE TRY AGAIN AND CHECK USERNAME\n\t\t\t\t\t--> PRESS ENTER FOR COUNTINUE \n");
            }
        }
        else /*call for no user*/
        {
            printf("YOU DONT HAVE ENY CHOSE BECAUSE YOU DIDNT MAKE ENY ACCONTE");
        }
    }
    else /*call for login*/
    {
        printf("\n!!!!!! YOU DIDNT LOGIN TO YOUR ACCONT ;)\n \t\t\t\t\tPLEASE USE --> login \"name\" \"password\" ;\n PRESS ENTER FOR COUNTINUE");
    }
    getchar();
}
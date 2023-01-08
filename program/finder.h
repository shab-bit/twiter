find_user(char *name, User *whois)
{
    if (whois)
    {
        User *users = head.linker;
        for (; users;)
        {
            if (!strcmp(users->name, swap1))
            {
                info(users);
                break;
            }
            printf("\nwe are here\n");
            users = users->linker;
        }
        if (!users)
        {
            printf("\nDIDNT FOUND ENY USER WITH THIS USERNAME :( PLEASE CHECK IT\n  \t\t\t\t\tPRESS ENTER FOR COUNTINIE\n");
        }
    }
    else
    {
        printf("\n!!!!!! YOU DIDNT LOGIN TO YOUR ACCONT ;)\n \t\t\t\t\tPLEASE USE --> login \"name\" \"password\" ;\n PRESS ENTER FOR COUNTINUE");
    }
    getchar();
}
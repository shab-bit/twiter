info(User *whois)
{
    if (whois) /*check for login*/
    {

        printf("\n=====================\nusername : %s \nid : %d\npassword : %s\n=====================\n-------------------------------------------------------------------------\n", whois->name, whois->id, whois->coder);
        if (whois->poster)
        {
            for (poster *worm = whois->poster; worm; worm = worm->linker) /*worming in posts*/
            {
                printf("\nid : %d \nlikes : %d \n body : |%s|\n-------------------------------------------------------------------\n", worm->id, worm->like, worm->body);
            }
        }
        else
        {
            printf("\nYOU DONT HAVE ENY POST\n\n PRESS ENTER FOR COUNTINUE\n"); /*call for empyty post*/
        }
    }
    else /*call for login*/
    {
        printf("\n!!!!!! YOU DIDNT LOGIN TO YOUR ACCONT ;)\n \t\t\t\t\tPLEASE USE --> login \"name\" \"password\" ;\n PRESS ENTER FOR COUNTINUE\n");
    }
    getchar();
}
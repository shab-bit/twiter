User *login(char *name, char *code)
{
    if (whois) /*check for log out*/
    {
        printf("\n!!!!! PLEASE FIRST LOG OUT THEN LOGIN !!!!!!\n"); /*call for log out*/
        return whois;
    }
    else
    {
        User *now = head.linker; /*basic values*/
        for (; now;)
        {
            if (!strcmp(now->name, swap1)) /*find username*/
            {
                if (!strcmp(now->coder, swap2)) /*check password*/
                {
                    printf("\n|\t:) YOUR ARE LOGIN TO YOUR ACCONT :)\t|\nPRESS ENTER FOR CONTINUE .");
                    getchar();
                    return now; /*send answer user pointer*/
                }
                else
                { /*call for wrong password*/
                    printf("\n* THE PASSWORD IS INCORRECT :( *\n\t\t\t\tPRESS ENTER FOR CONTINUE .");
                    getchar();
                    return whois; /*send no one*/
                }
            }
            now = now->linker; /*going forward*/
        }
        printf("\n!!!!! DIDNT FIND ENY USER WHITH THIS USER NAME !!!!!!\n"); /*call for didnt find eny user*/
        return whois;
    }
}
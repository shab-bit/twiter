int show(char *name, char *code, char *order)
{
    char compar1[] = "sighnup", compar2[] = "login", compar3[] = "post", compar4[] = "like", compar5[] = "logout", compar6[] = "delet", compar7[] = "info", compar8[] = "find_user", compar9[] = "quit", out = 'y';
    printf("---> WHAT YOU WANT TO DO ?\n\n(sighnup \"name\" \"password\" , login \"name\" \"password\" , post \"post body\" , like \"username\" \"id\" , logout , delete \"post id\" , info , find_user \"username\")\n");
    scanf("%[^\n^ ]%*c", order); /*give input*/
    if (!strcmp(order, compar1)) /*sighnup*/
    {
        namecode(name, code, 2); /*give input*/
        sighnup(name, code);
    }
    else if (!strcmp(order, compar2)) /*login*/
    {
        namecode(name, code, 2); /*give input*/
        whois = login(name, code);
    }
    else if (!strcmp(order, compar3)) /*post*/
    {
        namecode(name, code, 1); /*give input*/
        post(whois, name);
    }
    else if (!strcmp(order, compar4)) /*like*/
    {
        namecode(name, code, 3); /*give input*/
        like(name, code, whois);
    }
    else if (!strcmp(order, compar5)) /*logout*/
    {
        if (!whois)
        {
            printf("\nYOU ARE VERY SWITE IQ , FIRST LOGIN PLEASE :) \n\t\t\t\tpress enter\n"); /*call for didnt login*/
        }
        else
        {
            whois = NULL;                                                      /*logged out*/
            printf("\nYOUR ARE LOGGED OUT ; GOODBY :) \n\t\t\tpress enter\n"); /*call for done*/
        }
        getchar();
    }
    else if (!strcmp(order, compar6)) /*delet*/
    {
        namecode(name, code, 4);
        deletpost(name, whois);
    }
    else if (!strcmp(order, compar7)) /*info*/
    {
        info(whois);
    }
    else if (!strcmp(order, compar8)) /*find user*/
    {
        namecode(name, code, 1);
        find_user(name, whois);
    }
    else if (!strcmp(order, compar9)) /*quite*/
    {
        printf("\nGOODBY :)\n");
        order[0] = '0';
    }
    else
    {
        printf("\n\t\t\t!!!!!! PLEAS ENTER A CORRECT ORDER ; TRY AGAIN !!!!!!!!\n"); /*call for wrong input*/
    }
    printf("\n---------------------------------------------------------:)-----------------------------------------------------------\n"); /*for beuty*/
}

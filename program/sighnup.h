int sighnup(char *name, char *code)
{
    User *point = head.linker; /*basic values*/
    int id = 1;                /*make a base id*/
    for (; point; id++)        /*finde target user*/
    {
        if (!strcmp(point->name, swap1)) /*check for repirited name*/
        {
            id = 0; /*make a allert*/
            break;
        }
        point = point->linker; /*wormer*/
    }
    if (id) /*check for a unic name*/
    {
        User *new = (User *)malloc(sizeof(User));                  /*make space */
        new->name = (char *)malloc(sizeof(char) * strlen(swap1));  /*make space */
        strcpy(new->name, swap1);                                  /*copy answer*/
        new->coder = (char *)malloc(sizeof(char) * strlen(swap2)); /*make space */
        strcpy(new->coder, swap2);                                 /*copy answer*/
        point = head.linker;
        if (point) /*check for first user*/
        {
            for (id = 2; point; id++) /*find place of user*/
            {
                if (!(point->linker)) /* find last user*/
                {
                    point->linker = new;       /*add new user*/
                    new->id = (point->id) + 1; /* make id*/
                    break;
                }
                point = point->linker; /*wormer*/
            }
        }
        else /*make first user*/
        {
            head.linker = new;
            new->id = 1;
        }
        new->linker = NULL; /*basic valuse*/
        new->poster = NULL; /*basic valuse*/
        printf("\nYOR ACCONT MADE :)\n\t\t\t\t\t|||| name= %s , code = %s , id = %d ||||\n---> press enter\n", new->name, new->coder, new->id);
        getchar(); /*done*/
    }
    else /*call for repited name*/
    {
        printf("\n!!!!!! YOUR USERNAME BEFOR USED PLEASE CHOSE A NEW ONE ;) !!!!!!\n \t\t\t\t\t\t\tPRESS ENTER \n");
        getchar(); /*erore*/
    }
}
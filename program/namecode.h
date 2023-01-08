char swap1[1000];
char swap2[1000];
int postid = 0;
int namecode(char *name, char *code, int mode)
{
    if (mode == 1) /*mode one*/
    {
        scanf("%[^\n]%*c", swap1); /*get inpute*/
    }
    else if (mode == 2) /*mode two*/
    {
        scanf("%[^ ]%*c", swap1);                            /*get inpute*/
        name = (char *)malloc(sizeof(char) * strlen(swap1)); /*make space*/
        strcpy(name, swap1);                                 /*copy the inpute*/
        scanf("%[^\n]%*c", swap2);                           /*get inpute*/
        code = (char *)malloc(sizeof(char) * strlen(swap2)); /*make space*/
        strcpy(code, swap2);                                 /*copy the inpute*/
    }
    else if (mode == 3) /*mode tree*/
    {
        scanf("%[^ ]%*c", swap1);                            /*get inpute*/
        name = (char *)malloc(sizeof(char) * strlen(swap1)); /*make space*/
        strcpy(name, swap1);                                 /*copy the inpute*/
        scanf(" %d", &postid);                               /*get inpute*/
    }
    else /*mode four*/
    {
        scanf(" %d", &postid); /*get inpute*/
    }
}
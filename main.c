#include <stdio.h>

main()
{
    char ch;
    printf("\nPress any key. Press ENTER to quit.\n");
    do
    {
        while((ch=getch()) != '\r')
        {
            if(ch == '\t')
            {
                printf("\nYou pressed TAB\n");
                break;
            }
        }
    }while(ch != '\r');
    printf("\nprogram ended\n");
}
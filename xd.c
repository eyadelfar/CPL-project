#include <stdio.h>
#include "try.c"



int main()
{
    int x1=0;
    while(x1 != -1 )
{
    x1=0;
    printf("5)Encrypt\n55)Decrypt\n");
    scanf("%d",&x1);

    if(x1 == 5)
    {
            printf("\nEnter the method of encryption:\n");
            printf("1)easy encryption\n2)medium encryption\n");
            printf("3)hard encryption\n");
            scanf("%d",&x1);
            printf("\n");

        if(x1 == 1)
        {
            x1=0;
            char u[20];
            gets(u);
            fflush(stdin);
            easy_encrypt(u);
            printf("\n");
        }
        else if(x1 == 2)
        {
            printf("2 clicked\n");
            // mid_encrypt();
        }
        else if(x1 == 3)
        {
            printf("3 clicked\n");
            // hard_encrypt();
        }
        else 
        {
            printf("Wrong number enterted");
        }
    }



    else if(x1 == 55)
    {
        printf("Enter the method of decryption:\n");
        printf("1)easy decryption\n2)medium decryption\n");
        printf("3)hard decryption\n");
        scanf("%d",&x1);
        printf("\n");

        if(x1 == 1)
        {
            x1=0;
            char u[20];
            gets(u);
            fflush(stdin);
            easy_decrypt(u);
            printf("\n");
        }
        else if(x1 == 2)
        {
                printf("2 clicked dec\n");
                // mid_decrypt();
        }
        else if(x1 == 3)
        {
                printf("3 clicked dec\n");
                // hard_decrypt();
        }


        else 
        {
            printf("Wrong number enterted");
        }
    }
    else
    {
    printf("Wrong number enterted");
    }

}}

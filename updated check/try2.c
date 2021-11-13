#include <stdio.h>
#include "try.c"


int main()
{
    int menu=0,encmenu=0,decmenu=0;
    char wh='X';
while (menu != -1 )
{
    printf("1)Encrypt\n2)Decrypt\n");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        encmenu = encrypt_menu();
                    switch (encmenu)
                    {
                    case 1:
                        easy_encrypt();
                        break;
                    case 2:
                        return 2;
                        break;
                    case 3:
                        return 3;
                        break;}
        break;
    case 2:
        decmenu = decrypt_menu();

                        switch (decmenu)
                    {
                    case 1:
                        easy_decrypt();
                        break;
                    case 2:
                        return 2;
                        break;
                    case 3:
                        return 3;
                        break;}
        break;
    
    default:
        printf("\nWrong input\n");
        break;
    }



    printf("\nWant another process? (y for yes/n for no): ");
    wh= getch();
    if(wh=='y' || wh == 'Y'){
        printf("\n");
        menu=1;
    }
    else if(wh== 'n' || wh == 'N'){
        menu=-1;
    }
    else
    {
        printf("\nWrong input\n");
        menu=-1;
    }
}
    
}

#include <stdio.h>
#include "header.c"
int main()
{
    int number;
    int menu=0,encmenu=0,decmenu=0;
    char wh='X';
    char Text[MAX],CText[MAX],Key[100];
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
                fflush(stdin);
                printf("\nEnter the word you want to encrypt: ");
                scanf("%s", &Text[MAX]);
                printf("\nThe decryption is: ");
                ma7_encryption(&Text[MAX]);
                break;
            case 2:
                fflush(stdin);
                printf("Enter a message to encrypt: ");
                scanf("%s", &Text);
                printf("Enter key number from 0 to 25: ");
                scanf("%d", &number);
                printf("Encrypted message: ");
                printf("%s", caesar_encrypt(Text, number));
                break;
            case 3:
                fflush(stdin);
                gets(Text);
                fflush(stdin);
                printf("Enter the key:");
                fflush(stdin);
                scanf("%s",Key);
                printf("The encrypted text with key '%s' is:",Key);
                vigenere_encrypt(Text,Key);
                break;}
        break;
    case 2:
        decmenu = decrypt_menu();
        switch (decmenu)
        {
        case 1:
            fflush(stdin);
            printf("\nEnter the word you want to decrypt: ");
            scanf("%s", &Text[MAX]);
            printf("\nThe encryption is: ");
            ma7_decryption(&Text[MAX]);
            break;
        case 2:
            fflush(stdin);
            printf("Enter a message to decrypt: ");
            scanf("%s", &Text);
            printf("Enter key number from 0 to 25: ");
            scanf("%d", &number);
            printf("decrypted message: ");
            printf("%s", caesar_decrypt(Text, number));
            break;
        case 3:
            fflush(stdin);
            gets(CText);
            fflush(stdin);
            printf("Enter the key:");
            fflush(stdin);
            scanf("%s",Key);
            printf("The encrypted text with key '%s' is:",Key);
            vigenere_decrypt(CText,Key);
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
}}
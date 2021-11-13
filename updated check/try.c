#include <string.h>
int menuf(x){
        switch (x)
    {
    case 1:
        printf("Enter a string:\n");
        return 1;
        break;
    case 2:
        printf("Enter a string:\n");
        return 2;
        break;
    case 3:
        printf("Enter a string:\n");
        return 3;
        break;
    
    default:
        printf("\nWrong input\n");
        return -1;
        break;
    }
}
int encrypt_menu(){
    int x=0;
    printf("\nEnter the method of encryption:\n");
    printf("1)easy encryption\n2)medium encryption\n");
    printf("3)hard encryption\n");
    scanf("%d",&x);
    return menuf(x);
}
int decrypt_menu(){
    int x=0;
    printf("Enter the method of decryption:\n");
    printf("1)easy decryption\n2)medium decryption\n");
    printf("3)hard decryption\n");
    scanf("%d",&x);
    printf("Enter a string:\n");
    fflush(stdin);
    return menuf(x);

}


void easy_encrypt()
{
    char x[20];
    fflush(stdin);
    gets(x);
    fflush(stdin);
    
    for (int i = 0;i<strlen(x); i++)
        {
           x[i]+=1;
            printf("%c",x[i]);
        }
}

void easy_decrypt()
{
    char x[20];
    fflush(stdin);
    gets(x);
    fflush(stdin);
    for (int i = 0;i<strlen(x); i++)
        {
           x[i]-=1;
            printf("%c",x[i]);
        }
}



// // void mid_encrypt(){

// // }
// // void hard_encrypt(){

// // }

// void mid_decrypt(){
// // }
// // void hard_decrypt(){

// // }

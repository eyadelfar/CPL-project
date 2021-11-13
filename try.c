void easy_encrypt(char x[20]){
    for (int i = 0;(i<50 && x[i] != '\0'); i++)
        {
           x[i]+=1;
            printf("%c",x[i]);
        }
    
}
// void mid_encrypt(){

// }
// void hard_encrypt(){

// }
void easy_decrypt(char x[20]){
    for (int i = 0;(i<50 && x[i] != '\0'); i++)
        {
           x[i]-=1;
            printf("%c",x[i]);
        } }
// void mid_decrypt(){

// }
// void hard_decrypt(){

// }

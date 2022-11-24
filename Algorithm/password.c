#include <stdio.h>
#include <string.h>
int main(){

    printf("Wellcome to BINUSMAYA\n");
    
    char sign[100]; 

    //inisialisasi flag, 1 artinya true, 0 artinya false
    int flagUsername = 1;

    //while menerima boolean, jika 1 artinya program jalan, 0 tidak
    while (flagUsername) {
        printf("Masukan username\t: "); 
        scanf("%s", sign);
        getchar(); /*santanamnaa*/

        //saat username tidak sama kita langung kembali ke atas, karena flag masih 1
        if (!strcmp(sign, "santanamnaa")){
            flagUsername = 0;
            int flagPassword = 1;

            
            while (flagPassword) {
                printf("Masukan password\t: ");
                char password[100];
                scanf("%s", password);
                getchar(); /*anakbinus*/

                //saat password tidak sama kita langung kembali ke atas, karena flag masih 1
                if (!strcmp(password, "anakbinus")){
                    printf("Kamu telah berhasil login\n");
                    flagPassword = 0;
                }else{
                    printf("password salah\n");
                }
            }
        }
    }
    return 0;
}
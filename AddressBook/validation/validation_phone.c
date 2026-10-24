#include "addressbook.h"

int validation_phone(char phone_num[]){
    int flag=0;
    int i;
    while(1){
        printf("Enter the phone_num: ");
        scanf("%s",phone_num);

        //phone_num length should be 10
        if(strlen(phone_num)!=10){
            printf("Enter valid Number.\n");
            continue;
        }
        

        //check all the characters are digits
        i=0;
        while(phone_num[i]){
            if(!isdigit(phone_num[i])){
                printf("Enter valid Number.\n");
                break;
            }
            i++;
        }

        if(phone_num[i]!='\0') continue;

        //first character of phone_num in between 6 to 9
        if(phone_num[0]< '6' || phone_num[0]>'9'){
            printf("Enter valid Number.\n");
            continue;
        }

        flag=!flag;
        break;
    }

    return flag;
}
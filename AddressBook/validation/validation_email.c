#include "addressbook.h"

int validation_email(char email_id[]){
    int flag=0;
    int i;
     while(1){
        //validate the email id
        printf("Enter the emailId: ");
        scanf("%s",email_id);

        //@ is present or not
        if(email_id[0]=='@'){
            printf("Enter valid email ID.\n");
            continue;
        }

        i=0;
        int pst=0;
        while(email_id[i]){
            if(email_id[i]=='@'){
                pst++;
            }
            i++;
        }

        if(pst!=1){
            printf("Enter valid email ID.\n");
            continue;
        } 

        //check that .com is present or not
        char str[]=".com";
        int len1=strlen(str);
        int len=strlen(email_id);

        i=0;
        while(i<len1){
            if(str[len1-i-1]!=email_id[len-i-1]){
                break;
            }
            i++;
        }

        if(i!=len1) {
            printf("Enter valid email ID.\n");
            continue;
        }


        //check that all character should be in lowercase
        i=0;
        int ind=-1;
        while(email_id[i]){
                if(isupper(email_id[i])){
                    ind=i;
                    printf("Enter valid email ID.\n");
                    break;
                }
                i++;
        }

        if(ind!=-1) continue;

        //first character should not be a digit
        if(isdigit(email_id[0])){
            printf("Enter valid email ID.\n");
            continue;
        }
            flag=!flag;
            break;
    }

    return flag;

}
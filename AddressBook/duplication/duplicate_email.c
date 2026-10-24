#include "addressbook.h"

int duplicate_email(char email_id[],struct AddressBook *addressBook){
    int cnt=addressBook->contactCount;
    int i=0;
    while(i<cnt){
        if(strcmp(email_id,addressBook->contacts[i].email)==0){
            printf("Entered email_id is already present.\n");
            return 0;
        }
        i++; 
    }
    return 1;
}
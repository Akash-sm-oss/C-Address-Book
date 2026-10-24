#include "addressbook.h"

int duplicate_phone(char phone_num[],struct AddressBook *addressBook){
    int cnt=addressBook->contactCount;
    int i=0;
    while(i<cnt){
        if(strcmp(phone_num,addressBook->contacts[i].phone)==0){
            printf("Entered number is already present.\n");
            return 0;
        }
        i++; 
    }
    return 1;
}
#include "addressbook.h"

int validation_phone(char phone_num[]);
int duplicate_phone(char phone_num[],struct AddressBook* addressBook);

void edit_phone(struct AddressBook* addressBook,int indx){
    char phone_num[15];
    int valid_phone=validation_phone(phone_num);
    int unique_num=duplicate_phone(phone_num,addressBook);

    while(unique_num==0){
        valid_phone=validation_phone(phone_num);
        unique_num=duplicate_phone(phone_num,addressBook);
    }

    if(valid_phone && unique_num){
        strcpy(addressBook->contacts[indx].phone,phone_num);
    }  
}
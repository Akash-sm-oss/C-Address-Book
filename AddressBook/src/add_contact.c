#include "addressbook.h"
int validation_phone(char phone_num[]);
int validation_email(char email_id[]);

int duplicate_phone(char phone_num[],struct AddressBook *addressBook);
int duplicate_email(char email_id[],struct AddressBook *addressBook);

void getName(struct AddressBook *addressBook){
    int indx=addressBook->contactCount;
    printf("Enter the name: ");
    scanf("%s",addressBook->contacts[indx].name);
}

void getPhone_num(struct AddressBook *addressBook){

    int indx=addressBook->contactCount;
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

void getEmailId(struct AddressBook * addressBook){
    int indx=addressBook->contactCount;
    char email_id[50];

    int valid_email=validation_email(email_id);
    int unique_email=duplicate_email(email_id,addressBook);

    while(unique_email==0){
        valid_email=validation_email(email_id);
        unique_email=duplicate_email(email_id,addressBook);
    }

    if(valid_email && unique_email){
        strcpy(addressBook->contacts[indx].email,email_id);
    } 
}

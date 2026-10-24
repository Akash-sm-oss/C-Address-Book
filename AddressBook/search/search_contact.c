#include "addressbook.h"

int validation_phone(char phone_num[]);
int validation_email(char email_id[]);

void display_name(char name[],struct AddressBook* addressBook);
void display_phone(char phone_num[],struct AddressBook* addressBook);
void display_email(char email_id[],struct AddressBook* addressBook);



void search_name(struct AddressBook *addressBook){
    char name[50];
    printf("Enter the name: ");
    scanf("%s",name);
    display_name(name,addressBook);
}

void search_phone(struct AddressBook *addressBook){
    char phone_num[15];
    int valid_phone=validation_phone(phone_num);
    if(valid_phone) display_phone(phone_num,addressBook);
}

void search_email(struct AddressBook *addressBook){
    char email_id[50];
    int valid_email=validation_email(email_id);
    if(valid_email) display_email(email_id,addressBook);
}

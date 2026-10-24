#include "addressbook.h"

int validation_email(char phone_num[]);
int duplicate_email(char email_id[],struct AddressBook* addressBook);

void edit_email(struct AddressBook* addressBook,int indx){
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
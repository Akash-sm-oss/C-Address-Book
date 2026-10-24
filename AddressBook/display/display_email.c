#include "addressbook.h"

void display_email(char email_id[],struct AddressBook* addressBook){
    int cnt=addressBook->contactCount;
    int i,j,k;
    i=j=0;
    k=1;

    addressBook->ir_size=0;

    while(i<cnt){
        if(strcmp(email_id,addressBook->contacts[i].email)==0){
            addressBook->index_record[j++]=i;
            addressBook->ir_size++;
            printf("%d  %s %s %s\n",k,addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
            k++;
        }
        i++;
    }
}


#include "addressbook.h"

void display_phone(char phone_num[],struct AddressBook* addressBook){
        int cnt=addressBook->contactCount;
        int i,j,k;
        i=j=0;
        k=1;

        addressBook->ir_size=0;
        while(i<cnt){
            if(strcmp(phone_num,addressBook->contacts[i].phone)==0){
                addressBook->index_record[j++]=i;
                addressBook->ir_size++;
                printf("%d  %s %s %s\n",k,addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
            }
            i++;
        }
}


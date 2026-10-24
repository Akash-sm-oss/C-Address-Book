#include "addressbook.h"

void save_contact(struct AddressBook* addressBook){
    
    FILE* fptr;
    fptr=fopen("database.csv","w");


    for(int i=0;i<addressBook->contactCount;i++){
        fprintf(fptr,"%s,",addressBook->contacts[i].name);
        fprintf(fptr,"%s,",addressBook->contacts[i].phone);
        fprintf(fptr,"%s\n",addressBook->contacts[i].email);
    }
    
    fclose(fptr);

}
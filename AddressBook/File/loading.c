#include "addressbook.h"

void loading_from_file_To_struct(struct AddressBook *addressBook){
    //file pointer 
    FILE* fptr;

    fptr=fopen("database.csv","r");
    int i=addressBook->contactCount;

    while(fscanf(fptr," %[^,],%[^,],%[^\n]",
        addressBook->contacts[i].name,
        addressBook->contacts[i].phone,
        addressBook->contacts[i].email)==3
    ){
        addressBook->contactCount++;
        i++;
    }

    fclose(fptr);

}
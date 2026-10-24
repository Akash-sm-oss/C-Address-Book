#include "addressbook.h"

void edit_name(struct AddressBook* addressBook,int indx){
    char name[50];
    printf("Enter name: ");
    scanf("%s",name);

    strcpy(addressBook->contacts[indx].name,name);
}
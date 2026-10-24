#include "addressbook.h"
void del_contact(struct AddressBook* addressBook,int indx){
    int size=addressBook->contactCount;
    int i=indx;
    int j=i+1;

    while(i<size && j<size){
        addressBook->contacts[i]=addressBook->contacts[j];
        i++;
        j++;
    }  
    addressBook->contactCount--;
    save_contact(addressBook);
}
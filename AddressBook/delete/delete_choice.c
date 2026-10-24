#include "addressbook.h"

void delete_menu(struct AddressBook* addressBook,int indx);

void delete_choice(struct AddressBook* addressBook){
     int indx;
    printf("Select one contact to delete: ");
    scanf("%d",&indx);

    while(indx<1 || indx>addressBook->ir_size){
        printf("Enter valid indx.\n");
        printf("Select one contact to delete: ");
        scanf("%d",&indx);
    }

    int cnt=addressBook->index_record[indx-1];
    printf("Display selected contact:\n");
    printf("%d %s %s %s\n",indx,addressBook->contacts[cnt].name,addressBook->contacts[cnt].phone,addressBook->contacts[cnt].email);
    delete_menu(addressBook,cnt);
    
}
#include "addressbook.h"

void edit_menu(struct AddressBook* addressBook,int indx);

void edit_choice(struct AddressBook* addressBook){
    int indx;
    printf("Please select your contact: ");
    scanf("%d",&indx);

    while(indx<1 || indx>addressBook->ir_size){
        printf("Enter valid indx.\n");
        printf("Please select your contact: ");
        scanf("%d",&indx);
    }

    int cnt=addressBook->index_record[indx-1];
    printf("Display selected contact:\n");
    printf("%d %s %s %s\n",indx,addressBook->contacts[cnt].name,addressBook->contacts[cnt].phone,addressBook->contacts[cnt].email);
    
    edit_menu(addressBook,cnt);
    save_contact(addressBook);
}
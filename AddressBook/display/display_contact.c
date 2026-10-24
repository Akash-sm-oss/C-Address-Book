#include"addressbook.h"
void display_contact(struct AddressBook *addressBook){
    
    int cnt=addressBook->contactCount;
    for(int i=0;i<60;i++){
        printf("-");
    }

    printf("\n");
   
    printf("%-5s %-15s %-20s %-20s\n", "S.No", "Name", "Phone", "EmailID");

    for(int i=0;i<60;i++){
        printf("-");
    }

   printf("\n");

   for(int i = 0;i<cnt;i++){
        printf("%-5d %-15s %-20s %-20s\n",
            i + 1,
            addressBook->contacts[i].name,
            addressBook->contacts[i].phone,
            addressBook->contacts[i].email);
        }

    for(int i=0;i<60;i++){
        printf("-");
    }

}
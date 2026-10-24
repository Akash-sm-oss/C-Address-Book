#include "addressbook.h"

void del_contact(struct AddressBook* addressBook,int indx);

void delete_menu(struct AddressBook* addressBook,int indx){
    char choice;

    do{
        printf("Do you want to delete (y/n): ");
        scanf(" %c",&choice);

        choice=tolower(choice);

        while(choice!='y' &&  choice!='n'){
            printf("Do you want to delete (y/n): ");
            scanf(" %c",&choice);
            choice=tolower(choice);
        }

        switch (choice){
            case 'y':
            del_contact(addressBook,indx);
            break;
            
            case 'n':
            printf("exist....\n");
            break;
            
            default:
            printf("Enter valid choice.please try again.\n");
        }
    }while(choice!='y' && choice!='n');
}
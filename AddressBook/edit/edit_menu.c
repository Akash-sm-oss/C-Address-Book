#include "addressbook.h"

void edit_name(struct AddressBook* addressBook,int indx);
void edit_phone(struct AddressBook* addressBook,int indx);
void edit_email(struct AddressBook *addressBook, int indx);

void edit_menu(struct AddressBook* addressBook,int indx){
    int choice;
    do{
        printf("what you want to edit.\n");
        printf("1.name\n");
        printf("2.Phone\n");
        printf("3.Email\n");
        printf("4.Exit\n");

        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch (choice){
        case 1:
            edit_name(addressBook,indx);
            break;

        case 2:
            edit_phone(addressBook,indx);
            break;
        case 3:
            edit_email(addressBook,indx);
            break;
        case 4:
            printf("exit....\n");
            break;
        default:
            printf("Enter valid choice.please try again.\n");
        }
    }while(choice!=4);
    
}
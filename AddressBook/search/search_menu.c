#include"addressbook.h"

void search_name(struct AddressBook* addressBook);
void search_phone(struct AddressBook* addressBook);
void search_email(struct AddressBook *addressBook);

void search_menu(struct AddressBook *addressBook){


    int choice;
    do{
        printf("Search by:\n");
        printf("1.search_by_name\n");
        printf("2.search_by_phone\n");
        printf("3.search_by_email\n");
        printf("4.Exit\n");

        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            search_name(addressBook);
            break;
            case 2:
            search_phone(addressBook);
            break;
            case 3:
            search_email(addressBook);
            break;
            case 4:
            printf("exit....\n");
            break;
            default:
            printf("Enter valid choice.please try again.\n");

        }
        if( addressBook->ir_size == 0  && choice!=4){
            printf("Contact not found\n");
        }

    }while(choice!=4);
}
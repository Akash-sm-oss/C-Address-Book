#include "addressbook.h"

void getName(struct AddressBook *addressBook);
void getPhone_num(struct AddressBook *addressBook);
void getEmailId(struct AddressBook * addressBook);
void display_contact(struct AddressBook* addressBook);

void search_menu(struct AddressBook* addressBook);
void edit_choice(struct AddressBook* addressBook);

void delete_choice(struct AddressBook* addressBook);

void add_contact(struct AddressBook *addressBook){
    //add the name of person
    getName(addressBook);
    getPhone_num(addressBook);
    getEmailId(addressBook);

    addressBook->contactCount++;
    save_contact(addressBook);

}

void search_contact(struct AddressBook *addressBook){
    search_menu(addressBook);
}


void edit_contact(struct AddressBook *addressBook){
    //call the search contact operation
    search_menu(addressBook);
    edit_choice(addressBook);
}


void delete_contact(struct AddressBook *addressBook){
    search_menu(addressBook);
    delete_choice(addressBook);

}


void list_contacts(struct AddressBook *addressBook){
    display_contact(addressBook);
}



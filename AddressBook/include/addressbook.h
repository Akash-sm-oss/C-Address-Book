#ifndef CONTACT_H
#define CONTACT_H

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


struct Contact{
    char name[50];
    char phone[15];
    char email[50];
};

struct AddressBook {
    struct Contact contacts[100];
    int contactCount;
    int index_record[100];
    int ir_size;
};

void add_contact(struct AddressBook *addressBook);
void search_contact(struct AddressBook *addressBook);
void edit_contact(struct AddressBook *addressBook);
void delete_contact(struct AddressBook *addressBook);
void list_contacts(struct AddressBook *addressBook);
void save_contact(struct AddressBook* addressBook);
void loading_from_file_To_struct(struct AddressBook *addressBook);

#endif

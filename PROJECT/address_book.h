#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include <vector>
#include "contact.h"

class AddressBook {
private:
    std::vector<Contact> contacts;

public:
    void addContact();
    void findContact();
    void updateContact();
    void displayContacts();
};

#endif // ADDRESS_BOOK_H

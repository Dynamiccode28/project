#include <iostream>
#include "address_book.h"

int main() {
    AddressBook addressBook;
    int choice;

    while (true) {
        std::cout << "========== Address Book ==========" << std::endl;
        std::cout << "1. Add Contact" << std::endl;
        std::cout << "2. Find Contact" << std::endl;
        std::cout << "3. Update Contact" << std::endl;
        std::cout << "4. Display All Contacts" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addressBook.addContact();
                break;
            case 2:
                addressBook.findContact();
                break;
            case 3:
                addressBook.updateContact();
                break;
            case 4:
                addressBook.displayContacts();
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}

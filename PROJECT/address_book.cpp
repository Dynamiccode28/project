#include <iostream>
#include "address_book.h"

void AddressBook::addContact() {
    std::string name, phoneNumber;
    std::cout << "Enter the name: ";
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, name);

    std::cout << "Enter the phone number: ";
    std::getline(std::cin, phoneNumber);

    contacts.emplace_back(name, phoneNumber);
    std::cout << "Contact added successfully." << std::endl;
}

void AddressBook::findContact() {
    std::string name;
    std::cout << "Enter the name to find: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    bool found = false;
    for (const auto& contact : contacts) {
        if (contact.getName() == name) {
            std::cout << "Contact found: " << contact.getName() << ", " << contact.getPhoneNumber() << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Contact not found." << std::endl;
    }
}

void AddressBook::updateContact() {
    std::string name;
    std::cout << "Enter the name of the contact to update: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    bool found = false;
    for (auto& contact : contacts) {
        if (contact.getName() == name) {
            std::string phoneNumber;
            std::cout << "Enter the new phone number: ";
            std::getline(std::cin, phoneNumber);
            contact.setPhoneNumber(phoneNumber);
            std::cout << "Contact updated successfully." << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Contact not found." << std::endl;
    }
}

void AddressBook::displayContacts() {
    if (contacts.empty()) {
        std::cout << "No contacts found." << std::endl;
    } else {
        std::cout << "========== Contacts ==========" << std::endl;
        for (const auto& contact : contacts) {
            std::cout << contact.getName() << ": " << contact.getPhoneNumber() << std::endl;
        }
    }
}

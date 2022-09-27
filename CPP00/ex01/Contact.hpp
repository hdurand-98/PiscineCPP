#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
    public:

    Contact();
    ~Contact();

    void SetContact();
    void ShowContact(int i);
    void ShowFullContact();

    private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_num;
    std::string darkest_secret;
};

#endif
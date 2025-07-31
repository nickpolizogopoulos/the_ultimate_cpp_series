//
// Created by Nick Polizogopoulos on 31/7/25.
//

#ifndef ACCOUNTLOCKED_H
#define ACCOUNTLOCKED_H

#include <exception>

class AccountLocked : public std::exception {
public:
    const char *what () const noexcept override {
        return "Your account is locked!";
    }
};

#endif //ACCOUNTLOCKED_H

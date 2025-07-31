//
// Created by Nick Polizogopoulos on 31/7/25.
//

#include <iostream>
#include "AccountLocked.h"

void login() {
    throw AccountLocked{};
}

void customExceptions() {

    try {
        login();
    }
    //both will work, we can catch any kind (line 18)
    // catch (const AccountLocked& e) {
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
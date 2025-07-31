//
// Created by Nick Polizogopoulos on 31/7/25.
//

#include <iostream>

template<typename K, typename V>
void display(K key, V value) {
    std::cout << key << ": " << value << std::endl;
}

void templateWithMultipleParameters() {

    display("name", "Nick");
    display("age", 33);
}
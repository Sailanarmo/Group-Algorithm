#include <iostream>


#include "container.hpp"

void Container::insert(int min, int max) {
    insert(head, min, max);
}

std::shared_ptr<Node> Container::insert(std::shared_ptr<Node> list, int min, int max) {


    if (!list) {
        list = std::make_shared<Node>(min, max);
    }
    else {
        std::cout << "Inserting: " << std::endl;
        list->right = insert(list->right, min, max);
    }

        return list;
}

void Container::printMin() {
    printMin(head);
}

void Container::printMin(std::shared_ptr<Node> min) {
    if(!min){
        std::cout << "The list is empty!" << std::endl;
    }
    else {
        std::cout << min->right << " ";
        printMin(min->right);
    }
}





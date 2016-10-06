#include <iostream>
#include <algorithm>
#include <limits>

#include "container.hpp"

void Container::insert(int min, int max) {
    insert(head, min, max);
}

std::shared_ptr<Node> Container::insert(std::shared_ptr<Node> &list, int min, int max) {

    if (!list) {
        list = std::make_shared<Node>(min, max);
    }
    else {
        list->right = insert(list->right, min, max);
    }

        return list;
}

void Container::printMin() {
    printMin(head);
}

void Container::printMin(std::shared_ptr<Node> root) {

    if(!root){
        return;
    }
    else {
        std::cout << root->min << " ";
        printMin(root->right);
    }
}

void Container::printMax(){
    printMax(head);
}

void Container::printMax(std::shared_ptr<Node> root) {

    if(!root){
        return;
    }
    else {
        std::cout << root->max << " ";
        printMin(root->right);
    }
}

void Container::findLargestMax() {
    findLargestMax(head);
}

int Container::findLargestMax(const std::shared_ptr<Node> head) {
    if(head == 0) {
        return std::numeric_limits<int>::min();
    } else {
        return std::max(head->max, findLargestMax(head->right));
    }
}
//void Container::findSmallestMin() {
//    findSmallestMin(head);
//}
//
//int Container::findSmallestMin(std::shared_ptr<Node> root) {
//
//}







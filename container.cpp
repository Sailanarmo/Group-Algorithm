#include <iostream>

#include "container.hpp"

void Container::insert(int min, int max) {
    insert(head, min, max);
}

void Container::insert(std::shared_ptr<Node> list, int min, int max){

    std::cout << min << " " << max << std::endl;
    if(!list){
	list = std::make_shared<Node>(min,max);
    }
    std::cout << "Done" << std::endl;
    if(list->data > max)
    
        insert(list->right, min, max);

}

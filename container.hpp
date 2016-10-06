#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <vector>
#include <memory>

struct Node{

    Node(int m = 0, int M = 0, std::shared_ptr<Node> r = nullptr) : min(m), max(M), right(r){}

    std::shared_ptr<Node> right;

    //int data;
    int min;
    int max;

};


class Container{

public:

    Container() : head(nullptr){};

    void insert(int min, int max);
    std::shared_ptr<Node> insert(std::shared_ptr<Node> head, int min, int max);
    void printMin();
    void printMin(std::shared_ptr<Node> min);


private:
    std::shared_ptr<Node> head;
};


#endif

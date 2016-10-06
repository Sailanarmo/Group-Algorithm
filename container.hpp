#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <vector>
#include <memory>

struct Node{

    Node(int m = 0, int M = 0, std::vector<int> c, std::shared_ptr<Node> r = nullptr) : min(m), max(M), container(c), right(r){}

    std::shared_ptr<Node> right;
    std::vector<int> container;

    //int data;
    int min;
    int max;

};


class Container{

public:

    Container() : head(nullptr){};

    void insert(int min, int max);
    std::shared_ptr<Node> insert(std::shared_ptr<Node> &list, int min, int max);
    void printMin();
    void printMin(std::shared_ptr<Node> root);
    void printMax();
    void printMax(std::shared_ptr<Node> root);
    void findLargestMax();
    int findLargestMax(const std::shared_ptr<Node> head);


private:
    std::shared_ptr<Node> head;
};


#endif

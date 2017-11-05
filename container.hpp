#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <vector>
#include <memory>

struct Node
{

    Node(int m = 0, int M = 0, std::vector<int> c = {0,0}, std::shared_ptr<Node> r = nullptr) : min(m), max(M), container(c), right(r){}

    int min;
    int max;
    std::vector<int> container;
    std::shared_ptr<Node> right;
};


class Container
{

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
	void findSmallestMin();
    int findSmallestMin(const std::shared_ptr<Node> head);
	int getMax();
	int getMin();


private:
    std::shared_ptr<Node> head;
	int maximum = 0;
	int minimum;

};


#endif

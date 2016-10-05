#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <vector>
#include <memory>
#include <functional>

struct Node{

    Node(int d = 0, int m = 0, int M = 0, std::shared_ptr<Node> r = nullptr, std::shared_ptr<Node> l = nullptr) : data(d), min(m), max(M), right(r), left(l){}

    std::shared_ptr<Node> right;
    std::shared_ptr<Node> left;
    int data;
    int min;
    int max;

};

template<typename T>
void forEachR(std::shared_ptr<Node> list, void(*f)(const T &)){
    if(!list) return;
    f(list->data);
    forEachR(list->right, f);
}


class Container{

public:

    Container() : head(nullptr){};

    void insert(int min, int max);
    void insert(std::shared_ptr<Node> head, int min, int max);

    template<typename F>
	void forEach(F f) { forEachR(head, f); }

private:
    std::shared_ptr<Node> head;
};


#endif

#include <iostream>
#include <cstdlib>
#include <vector>

#include "container.hpp"

int container()
{

    std::vector<int> a = {5, 9};
    std::vector<int> b = {1, 10};
    //std::vector<int> c = {12, 15};
    //std::vector<int> d = {20, 30};
    //std::vector<int> e = {1, 4};

    int aMin = a.at(0);
    int aMax = a.at(1);
    int aRange = aMax - aMin;

    int bMin = b.at(0);
    int bMax = b.at(1);
    int bRange = bMax - bMin;

    int maxRange = bRange;
    //for(auto & e : b){
	//std::cout << b.at(0)<< std::endl;
	//min = b.at(0);
    //}

    if(aMin <= bMin){
	std::cout << "Found potential minimum, checking the maximum..." << std::endl;
	if(aMax >= bMax){
	    std::cout << "Found a greater Maximum, checking the range..." << std::endl;
	    if(aRange > bRange){
		std::cout << "Found a new minimum for this set!" << std::endl;
		maxRange = aRange;
	    } else { 
		std::cout << "This is the minimum for the set!" << std::endl;
	    }
	} else {
	    std::cout << "Maximum is not greater, cannot be the new minimum!" << std::endl;
	}
    } else {
	std::cout << "This is the smallest minimum." << std::endl;
    }

    return maxRange;
}




int main()
{
    
    Container a;

    a.insert(1,10);
    a.insert(5,9);
    a.printMin();



    return EXIT_SUCCESS;

}

#include <iostream>
#include <cstring> 

// author: Charalampos Tsourakakis
// CS 591 T2, BU

unsigned long hash(std::string str){
        unsigned long hash = 5381;
        int c;

        for( int i = 0; i < str.length(); i++)
            hash = ((hash << 5) + hash) + str.at(i);
        return hash;
} 


int main()
{
    std::string s="Ey";
	std::cout<<"h(Ey)="<<hash(s)<<std::endl;
	s = "FZ"; 
	std::cout<<"h(FZ)="<<hash(s)<<std::endl;
	
	std::string q = "hetairas"; 
        std::cout<<"h(hetairas)"<<hash(q)<<std::endl; 
	q = "mentioner"; 
	std::cout<<"h(mentioner)"<<hash(q)<<std::endl;

	return 0;
} 

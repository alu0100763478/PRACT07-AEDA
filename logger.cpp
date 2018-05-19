#include <iostream>
#include <cstdlib>

class Logger{
    
    public:

    std::ostream& logger(std::string cadena)
    {
    	std::cout << cadena << " "<< std::endl;
    }
    
    std::ostream& logger(std::string cadena, int variable)
    {
    	std::cout << cadena << variable <<" ";
    }
    
    std::ostream& logger()
    {
    	std::cout <<" " <<  std::endl;
    }
};   
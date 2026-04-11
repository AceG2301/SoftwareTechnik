#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <exception>
#include "main.h"


struct ParsedInput {
    std::string country;
    std::string rating;
    char misc;

};

ParsedInput parse_line(const std::string& input) {              //This is the input function
    std::istringstream iss(input);
    ParsedInput result;

    if(!(iss >> result.country >> result.misc >> result.rating)){
        throw std::invalid_argument ("Invalid Input Format");
    }
    
}



int main(){

    
    
}
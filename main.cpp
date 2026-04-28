#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>
#include "main.h"


struct ParsedInput {
    std::string country;
    std::string rating;
    char misc;

};

ParsedInput parse_line(const std::string& input) {              //This is the input function
    std::istringstream iss(input);
    ParsedInput result;

    if(!(iss >> result.country >> result.misc >> result.rating)){           //Check Format
        throw std::invalid_argument ("Invalid Input Format");
    }
    

    if(result.rating[0]!='A' && result.rating[0]!='B' && result.rating[0]!='C'){    //Check if its A B or C
        throw std::invalid_argument ("Wrong rating");
    }

    if(result.rating=="AAA"){
        if(result.rating.size()>2){
            throw std::invalid_argument("Cant put Predicate on triple A");     //Check if Triple A is right
        }
        
    }

    return result;
    
}


//For the sorting we could assign points to each predicate, And the countries would then be sorted according to their scores


int main(){

    std::vector<std::string> countries;
    //

    
    
}
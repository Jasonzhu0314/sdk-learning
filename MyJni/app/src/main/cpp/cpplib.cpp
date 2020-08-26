//
// Created by jasonzhu on 20-8-26.
//
#include <string>
#include "third.h"


std::string say_from_cpplib(){
    std::string str = "say from cpplib" + say_from_third();
    return str;
}


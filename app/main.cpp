/** 
 *  @file    main.cpp
 *  @author  Karan Vivek Bhargava
 *  @copyright GNU Public License
 *  
 *  @brief ENPM808X, Part of assignment 5
 *
 *  @section DESCRIPTION
 *  
 *  This is a program that was edited to eliminate
 *  bugs.
 */

#include <iostream>
#include "AnalogSensor.hpp"

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}

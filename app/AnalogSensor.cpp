/** 
 *  @file    AnalogSensor.cpp
 *  @author  Karan Vivek Bhargava
 *  @copyright GNU Public License
 *  
 *  @brief ENPM808X, Part of assignment 4
 *
 *  @section DESCRIPTION
 *  
 *  This is a program that was edited to eliminate
 *  bugs.
 *
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::shared_ptr<std::vector<int>> readings = \
      std::make_shared<std::vector<int>> (mSamples, 10);

    double result = std::accumulate(readings->begin()\
      , readings->end(), 0.0) / readings->size();
    return result;
}



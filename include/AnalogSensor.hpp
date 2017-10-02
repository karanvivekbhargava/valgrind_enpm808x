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

#pragma once

#include <iostream>

class AnalogSensor {
 public:
  explicit AnalogSensor(unsigned int samples);
  ~AnalogSensor();
  int Read();
 private:
  unsigned int mSamples;
};

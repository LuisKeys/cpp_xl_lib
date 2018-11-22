#include <iostream>
#include <limits>
#include "XL5Summary.h"
#include "XL5Log.h"

// Calculates the max value in input array
// input > array of floats
// len > array length
float XL5Summary::max(float * input, int len) {
	XL5Log log;
	log.function_start("XL5Summary::max", XL5Color::FG_DEFAULT);

  float max_result = std::numeric_limits<int>::min();

  for(int i = 0; i < len; ++i) {
    if(max_result < input[i])
      max_result = input [i];
  }

	log.function_end("XL5Summary::max", XL5Color::FG_DEFAULT);
  return max_result;
}

// Calculates the min value in input array
// input > array of floats
// len > array length
float XL5Summary::min(float * input, int len) {
  XL5Log log;
  log.function_start("XL5Summary::max", XL5Color::FG_DEFAULT);

  float min_result = std::numeric_limits<int>::max();

  for(int i = 0; i < len; ++i) {
    if(min_result > input[i])
      min_result = input [i];
  }

  log.function_end("XL5Summary::min", XL5Color::FG_DEFAULT);
  return min_result;
}

// Calculates the total addition value in input array
// input > array of floats
// len > array length
float XL5Summary::sum(float * input, int len) {
	XL5Log log;
	log.function_start("XL5Summary::sum", XL5Color::FG_DEFAULT);

  float sum_result = 0;

  for(int i = 0; i < len; ++i) {
    sum_result += input[i];
  }

	log.function_end("XL5Summary::sum", XL5Color::FG_BLUE);
  return sum_result;
}
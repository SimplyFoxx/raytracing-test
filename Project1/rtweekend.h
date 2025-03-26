#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

// C++ Std using

using std::make_shared;
using std::shared_ptr;

// Konstanty

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926536897932385;

// Utility funkce

inline double degrees_to_radians(double degrees){
	return degrees * pi / 180.0;
}

// Obvyklé headery

#include "color.h"
#include "ray.h"
#include "vec3.h"

#endif
#ifndef CALC_H
#define CALC_H

#include "types.h"
#include <math.h>
#include "fib.h"

real_t add(real_t a, real_t b);
real_t sub(real_t a, real_t b);
real_t divide(real_t a, real_t b);
real_t mult(real_t a, real_t b);

real_t calc(real_t a, real_t b, string_t op);

#endif


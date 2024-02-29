/** \file mathf.h
	\brief Library of functions for computing integrals
	\author Paolo Gastaldo

	Details
*/

#ifndef MATHDF_H
#define MATHDF_H
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

float Polynomial(float* coeff, int size, float in);
void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);
float Trapezoidal(float* values, int size, float stepsize);

#endif // !_MATHDF_

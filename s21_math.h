#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S21_INF 1.0f / 0.0f
#define S21_E 2.71828182845904523536
#define S21_NAN 0.0f / 0.0f
#define S21_EPS 1e-6
#define S21_LIMIT 0.00000000000000000001
#define S21_PI 3.14159265358979323846
#define S21_PI_2 1.570796326
#define S21_PI_4 0.785398163


int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);

#endif
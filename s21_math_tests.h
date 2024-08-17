#ifndef SRC_S21_MATH_TESTS_H_
#define SRC_S21_MATH_TESTS_H_

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "../s21_math.h"

Suite *suite_abs(void);
Suite *suite_acos(void);
Suite *suite_asin(void);
Suite *suite_atan(void);
Suite *suite_ceil(void);

void run_test(void);
void run_testcase(Suite *testcase);

#endif //
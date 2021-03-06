#include "test_quick_sort.h"

#include "quick_sort.h"
#include "testc.h"

#include <stddef.h>
#include <string.h>

static void test_quick_sort_with_one_element(void) {
  size_t length = 1;
  int array[] = {1};
  quick_sort(array, length);
  int expected[] = {1};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_two_elements_1(void) {
  size_t length = 2;
  int array[] = {1, 2};
  quick_sort(array, length);
  int expected[] = {1, 2};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_two_elements_2(void) {
  size_t length = 2;
  int array[] = {2, 1};
  quick_sort(array, length);
  int expected[] = {1, 2};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_three_elements_1(void) {
  size_t length = 3;
  int array[] = {1, 2, 3};
  quick_sort(array, length);
  int expected[] = {1, 2, 3};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_three_elements_2(void) {
  size_t length = 3;
  int array[] = {1, 3, 2};
  quick_sort(array, length);
  int expected[] = {1, 2, 3};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_three_elements_3(void) {
  size_t length = 3;
  int array[] = {2, 1, 3};
  quick_sort(array, length);
  int expected[] = {1, 2, 3};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_three_elements_4(void) {
  size_t length = 3;
  int array[] = {2, 3, 1};
  quick_sort(array, length);
  int expected[] = {1, 2, 3};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_three_elements_5(void) {
  size_t length = 3;
  int array[] = {3, 1, 2};
  quick_sort(array, length);
  int expected[] = {1, 2, 3};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_three_elements_6(void) {
  size_t length = 3;
  int array[] = {3, 2, 1};
  quick_sort(array, length);
  int expected[] = {1, 2, 3};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_ascending_elements(void) {
  size_t length = 10;
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  quick_sort(array, length);
  int expected[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_descending_elements(void) {
  size_t length = 10;
  int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  quick_sort(array, length);
  int expected[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

static void test_quick_sort_with_equal_elements(void) {
  size_t length = 10;
  int array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  quick_sort(array, length);
  int expected[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  test_assert(memcmp(array, expected, length * sizeof(int)) == 0);
}

void test_quick_sort(void) {
  test(test_quick_sort_with_one_element);
  test(test_quick_sort_with_two_elements_1);
  test(test_quick_sort_with_two_elements_2);
  test(test_quick_sort_with_three_elements_1);
  test(test_quick_sort_with_three_elements_2);
  test(test_quick_sort_with_three_elements_3);
  test(test_quick_sort_with_three_elements_4);
  test(test_quick_sort_with_three_elements_5);
  test(test_quick_sort_with_three_elements_6);
  test(test_quick_sort_with_ascending_elements);
  test(test_quick_sort_with_descending_elements);
  test(test_quick_sort_with_equal_elements);
}

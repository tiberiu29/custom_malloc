#include "malloc.h"
#include "unity.h"

void setUp(void) {}

void tearDown() {}

void init() {
    TEST_ASSERT_NULL(c_malloc(10));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(init);
  return UNITY_END();
}

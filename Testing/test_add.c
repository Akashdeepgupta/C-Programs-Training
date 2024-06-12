// test_add.c
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "add.c" // Include the source file you want to test

void test_add() {
    CU_ASSERT(add(2, 3) == 5);
    CU_ASSERT(add(-1, 1) == 0);
    CU_ASSERT(add(0, 0) == 0);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("add_suite", NULL, NULL);
    CU_add_test(suite, "test_add", test_add);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}


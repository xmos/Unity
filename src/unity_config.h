#pragma once

// Use a macro instead of the built-in verson as this doesn't required function pointers
#define RUN_TEST(testfunc)                      \
    UNSAFE {                                    \
        UNITY_NEW_TEST(#testfunc)               \
            if (TEST_PROTECT()) {               \
                setUp();                              \
                testfunc();                           \
            }                                         \
        if (TEST_PROTECT() && (!TEST_IS_IGNORED))     \
            tearDown();                               \
        UnityConcludeTest();                          \
    }                                                 

#include <gtest/gtest.h>
#include "../labor6_2.hpp"

TEST(ArrayTest, MaxReturnsCorrectValue) {
    int a[] = {3, 5, 1, 7, 9, 2};
    EXPECT_EQ(Max(a, 6), 9);  // Максимальне значення має бути 9
}

// Тест для функції Min
TEST(ArrayTest, MinReturnsCorrectValue) {
    int a[] = {3, 5, 1, 7, 9, 2};
    EXPECT_EQ(Min(a, 6), 1);  // Мінімальне значення має бути 1
}

// Тест для функції searchmin
TEST(ArrayTest, SearchMinReturnsCorrectIndex) {
    int a[] = {3, 5, 1, 7, 9, 2};
    EXPECT_EQ(searchmin(a, 6), 2);  // Індекс мінімального елемента має бути 2
}

// Тест для функції searchmax
TEST(ArrayTest, SearchMaxReturnsCorrectIndex) {
    int a[] = {3, 5, 1, 7, 9, 2};
    EXPECT_EQ(searchmax(a, 6), 4);  // Індекс максимального елемента має бути 4
}

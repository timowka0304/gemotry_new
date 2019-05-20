#define CTEST_MAIN
#include <ctest.h>
#include <foo.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(perimetr_circle1_t, result_t)
{
    // Given
    const int r = 6;
    const double PI = 3.141592;
    // When
    const double result = Perimeter_circle(r, PI);
    // Then
    const double expected = 37.699104;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(perimetr_circle2_t, result_t)
{
    // Given
    const int r = 2;
    const double PI = 3.141592;
    // When
    const double result = Perimeter_circle(r, PI);
    // Then
    const double expected = 12.566368;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(perimetr_triangle1_t, result_t)
{
    // Given
    const int x1 = -1;
    const int x2 = -2;
    const int x3 = -7;
    const int y1 = 4;
    const int y2 = 2;
    const int y3 = 3;
    // When
    const double result = Perimeter_tr(x1, y1, x2, y2, x3, y3);
    // Then
    const double expected = 13.41785;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(perimetr_triangle2_t, result_t)
{
    // Given
    const int x1 = 3;
    const int x2 = 5;
    const int x3 = 5;
    const int y1 = 2;
    const int y2 = 4;
    const int y3 = 2;
    // When
    const double result = Perimeter_tr(x1, y1, x2, y2, x3, y3);
    // Then
    const double expected = 6.82842;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_triangle1_t, result_t)
{
    // Given
    const int x1 = 4;
    const int x2 = 1;
    const int x3 = 8;
    const int y1 = -5;
    const int y2 = 2;
    const int y3 = 6;
    // When
    const double result = Square_tr(x1, y1, x2, y2, x3, y3);
    // Then
    const double expected = 30.5;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_triangle2_t, result_t)
{
    // Given
    const int x1 = 3;
    const int x2 = 5;
    const int x3 = 5;
    const int y1 = 2;
    const int y2 = 4;
    const int y3 = 2;
    // When
    const double result = Square_tr(x1, y1, x2, y2, x3, y3);
    // Then
    const double expected = 2.0;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_circle1_t, result_t)
{
    // Given
    const int r = 8;
    const double PI = 3.141592;
    // When
    const double result = Square_circle(r, PI);
    // Then
    const double expected = 201.061888;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_circle2_t, result_t)
{
    // Given
    const int r = -5;
    const double PI = 3.141592;
    // When
    const double result = Square_circle(r, PI);
    // Then
    const double expected = 78.5398;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(peres_circle1_t, result_t)
{
    // Given
    const int x1 = 3;
    const int y1 = 4;
    const int r1 = 4;
    const int x2 = -2;
    const int y2 = 7;
    const int r2 = 3;
    // When
    const int result = Cross (x1, y1, r1, x2, y2, r2);
    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(peres_circle2_t, result_t)
{
    // Given
    const int x1 = 10;
    const int y1 = -3;
    const int r1 = 2;
    const int x2 = 4;
    const int y2 = 6;
    const int r2 = 1;
    // When
    const int result = Cross (x1, y1, r1, x2, y2, r2);
    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
} 

#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    unsigned int square_of_sum(int n)
    {
        unsigned int sum = (1 + n)*n/2;
        return sum * sum;
    }
    unsigned int sum_of_squares(int n)
    {
        return n*(n+1)*(2*n+1)/6;
    }
    unsigned int difference(int n)
    {
        return square_of_sum(n)-sum_of_squares(n);
    }

}  // namespace difference_of_squares

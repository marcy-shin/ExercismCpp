#include "darts.h"
#include <cmath>
namespace darts {

// TODO: add your solution here
    int score(double x, double y){
        double dist = std::sqrt(std::pow(x,2)+std::pow(y,2));
        if (dist<=1)
            return 10;
        if (dist<=5)
            return 5;
        if (dist<=10)
            return 1;
        return 0;
    }
    

}  // namespace darts

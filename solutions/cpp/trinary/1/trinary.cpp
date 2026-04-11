#include "trinary.h"
#include <cmath>
#include <string>
#include <algorithm>

namespace trinary {

// TODO: add your solution here
    unsigned int to_decimal(std::string tri){
        std::reverse(tri.begin(),tri.end());
        unsigned int ans{0};
        for (unsigned int i = 0; i < tri.size(); i++)
        {
            char c = tri[i];
            if (c != '0' && c!= '1' && c!='2')
                return 0;
            ans += (c-'0')*std::pow(3,i);
        }
        return ans;
    }
}  // namespace trinary

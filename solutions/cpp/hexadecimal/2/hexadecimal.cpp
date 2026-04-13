#include "hexadecimal.h"
#include <string>
#include <cmath>
#include <algorithm>
namespace hexadecimal {

// TODO: add your solution here
    unsigned int convert(std::string hex){
        std::string nums{"0123456789abcdef"};
        unsigned int ans{0};
        std::reverse(hex.begin(),hex.end());
        for(unsigned int i = 0; i < hex.size(); i++){
            auto base_ten = nums.find(hex[i]);
            if (base_ten == std::string::npos)
                return 0;
            ans += base_ten * std::pow(16,i);
        }
        return ans;
    }
}  // namespace hexadecimal

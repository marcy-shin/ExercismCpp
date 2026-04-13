#include "hexadecimal.h"
#include <string>
#include <cmath>
#include <algorithm>
namespace hexadecimal {

// TODO: add your solution here
    unsigned int convert(std::string hex){
        std::string alph{"abcdef"};
        std::string nums{"0123456789"};
        unsigned int ans{0};
        std::reverse(hex.begin(),hex.end());
        for(unsigned int i = 0; i < hex.size(); i++){
            int n{};
            if (alph.find(hex[i])!=std::string::npos)
                n = hex[i]-'a' + 10;
            else if (nums.find(hex[i])!=std::string::npos)
                n = hex[i]-'0';
            else
                return 0;
            ans += n * std::pow(16,i);
        }
        return ans;
    }
}  // namespace hexadecimal

#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
    std::string rotate(std::string input, int key)
    {

        std::string output{""};
        for (auto c:input){
            if (std::isalpha(c)){
                char base = ' ';
                if (std::islower(c))
                    base = 'a';
                else
                    base = 'A';
                c = base+(c-base+key)%26;
            }
            output+=c;
                
        }
        return output;
    }
}  // namespace rotational_cipher

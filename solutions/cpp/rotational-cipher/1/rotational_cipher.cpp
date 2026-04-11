#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
    std::string rotate(std::string input, int key)
    {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        std::string output{""};
        for (char c:input){
            if (alphabet.find(c)!=std::string::npos)
                output+=alphabet[(alphabet.find(c)+key)%26];
            else if (ALPHABET.find(c)!=std::string::npos)
                output+=ALPHABET[(ALPHABET.find(c)+key)%26];
            else
                output+=c;
                
        }
        return output;
    }
}  // namespace rotational_cipher

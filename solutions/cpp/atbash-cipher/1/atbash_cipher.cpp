#include "atbash_cipher.h"
#include <string>

namespace atbash_cipher {

// TODO: add your solution here
    std::string encode (std::string original)
    {
        std::string alphabet {"abcdefghijklmnopqrstuvwxyz"};
        std::string numbers {"0123456789"};
        std::string cypher {"zyxwvutsrqponmlkjihgfedcba"};
        std::string code {""};
        int charnum{0};
        for (char c : original){
            if (charnum == 5){
                code+=" ";
                charnum = 0;
            }
            c=std::tolower(c);
            if (alphabet.find(c)!=std::string::npos)
            {
                code+=cypher[alphabet.find(c)];
                charnum++;
            }
            if (numbers.find(c)!=std::string::npos)
            {
                code+=c;
                charnum++;
            }
        }
        if (code[code.size()-1]==' ')
            code = code.substr(0,code.size()-1);
        return code;
    }
    std::string decode (std::string code)
    {
        std::string alphabet {"abcdefghijklmnopqrstuvwxyz"};
        std::string numbers {"0123456789"};
        std::string cypher {"zyxwvutsrqponmlkjihgfedcba"};
        std::string original{""};
        for (char c : code){
            
            if (cypher.find(c)!=std::string::npos)
                original+=alphabet[cypher.find(c)];
            
            if (numbers.find(c)!=std::string::npos)
                original+=c;
        }
        return original;
    }
}  // namespace atbash_cipher
#include "luhn.h"
#include<string>
namespace luhn {

// TODO: add your solution here
    bool valid (std::string number)
    {
        std::string new_num{""};
        std::string nums{"0123456789"};
        int ans=0;
        for(int i = number.size()-1;i>=0;i--){
            if (nums.find(number[i])!=std::string::npos)
            {
                new_num+=number[i];
                continue;
            }
            if (number[i]==' ')
                continue;
            return false;
        }
        if (new_num.size()<=1)
            return false;
        for(unsigned int i = 0; i<new_num.size(); i++)
        {
            int n = new_num[i]-'0';
            if (i%2==1)
                n*=2;

            if (n>9)
                n-=9;
            
            ans+=n;
        }
        return ans%10==0;
    }

}  // namespace luhn

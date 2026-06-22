#include<iostream>
#include<print>
#include<string>
int
main ()
{
    int num;
    std::cin >> num;
    
    auto compareStrs = [&] (std::string w1, std::string w2) { 
        std::string resultStr {};
        for (size_t i = 0; i < w1.size (); ++i)
            resultStr += w1[i] == w2[i] ? "." : "*";
            
        return resultStr;
        
    };
    
    while (num--) {
        
        std::string word1, word2;
        std::cin >> word1 >> word2;
        std::println ("{}\n{}\n{}\n", word1, word2, compareStrs (word1, word2));
    }
}

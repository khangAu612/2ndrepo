#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<cctype>
#include<vector>
#include<iomanip>
using  std::cout;   using std::cin;     using std::endl;

bool is_palindrome(const std::string& str){
//    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    int i=0;
    bool palindrome;
    std::deque<char> d;
    for( char c :str){
        if(isalpha(c)){
            d.push_back(toupper(c))   ;
        }
    }

    while(!d.empty()) {
        if (d.front() == d.back()) {
            d.pop_front();
            if(!d.empty()) {
                d.pop_back();
            }
            palindrome = true;
        } else {
            palindrome = false;
            return palindrome;
        }
    }
    return palindrome;
}
int main(){
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                           "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                           "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;

    return 0;

}
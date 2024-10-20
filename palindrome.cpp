#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

bool isPalindrome(string s) {
    string normalized;

    for (char c : s) {
        if (isalnum(c)) { 
            normalized += tolower(c); 
        }
    }
    int left = 0;
    int right = normalized.size() - 1;

    while (left < right) {
        if (normalized[left] != normalized[right]) {
            return false; 
        }
        left++;
        right--;
    }

    return true; 
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    cout << "Input: \"" << s1 << "\" Output: " << (isPalindrome(s1) ? "true" : "false") << endl;

    
    cout << "Input: \"" << s2 << "\" Output: " << (isPalindrome(s2) ? "true" : "false") << endl;

    return 0;
}

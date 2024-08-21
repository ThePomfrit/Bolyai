/*

Írd meg a következő függvényeket rekurzívan:
+ Megszámolja, hogy egy string milyen hosszú 
    `strLen("anni tejet inna") = 15`
+ Megállapítja egy `string`ről, hogy palindrom-e 
    `palindrom("anni tejet inna") = true`
+ Megszámolja, hogy egy stringben hány magánhangzó van 
    `countVowels("anni tejet inna") = 6`
+ Megállapítja egy számsorozatról, hogy az bináris szám-e
    `isBinary("1000101101011) = true`
+ Megállapítja két `string`ről, hogy egyformák-e
    `equals("anni tejet inna", "anni tejet iszik") = false`
+ Leellenőrzi, hogy egy `string`ben, ami nyitó és csukó zárójelekből áll, helyesen van-e zárójelezve.
    `checkParentheses("[[][[[]][]]][][][[]]") = true`
    `checkParentheses("[[]][][[][][[[][]][]]") = false`
    `checkParenthese("[[[[[[[[[") = false`
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int strLen(string s) {
    if (s.size() == 0) {
        return 0;
    } else {
        return 1 + strLen(s.substr(1));
    }
}

string reverse(string s) {
    if (s.size() == 0) {
        return "";
    } else {
        return s[s.size()-1] + reverse(s.substr(0, s.size()-1));
    }
}
bool palindrom(string s) {
    if (s == reverse(s)) {
        return true;
    } else {
        return false;
    }
}

int countVowels(string s) {
    if (s.size() == 0) {
        return 0;
    } else {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        if (vowels.find(s[0]) != vowels.end()) {
            return 1 + countVowels(s.substr(1));
        } else {
            return countVowels(s.substr(1));
        }
    }
}

bool isBinary(string s) {
    if(s.size() == 0) {
        return true;
    } 
    if(s[0] == '0' || s[0] == '1') {
        return isBinary(s.substr(1));
    } else {
        return false;
    }
}

bool equals(string s1, string s2) {
    if(s1.size() != s2.size()) {
        return false;
    }
    if(s1.size() == 0) {
        return true;
    }
    if(s1[0] == s2[0]) {
        return equals(s1.substr(1), s2.substr(1));
    } 
    return false;
}

bool parenthesesHelper(string s, int count) {
    if(s.size() == 0) {
        return count == 0;
    }
    if(s[0] == '[') {
        return parenthesesHelper(s.substr(1), count + 1);
    } else if(s[0] == ']') {
        return count > 0 ? parenthesesHelper(s.substr(1), count - 1) : false;
    } else {
        return parenthesesHelper(s.substr(1), count);
    }
}

bool checkParentheses(string s) {
    return parenthesesHelper(s, 0);
}

int main() {
    string s = "anni tejet inna";

    cout << endl;
    cout <<  "==================== s = \"anni tejet inna\" ====================" << endl;
    cout <<  "                               strLen(s) =  " 
        << strLen(s) << endl;
    cout <<  "                            palindrom(s) =  " 
        << palindrom(s) << endl;
    cout <<  "                          countVowels(s) =  " 
        << countVowels(s) << endl;
    cout <<  "                             isBinary(s) =  " 
        << isBinary("1000101101011") << endl;
    cout <<  "           equals(s, \"anni tejet iszik\") =  " 
        << equals(s, "anni tejet iszik") << endl;
    cout <<  "checkParentheses(\"[[][[[]][]]][][][[]]\") =  " 
        << checkParentheses("[[][[[]][]]][][][[]]") << endl;
    
    return 0;
}
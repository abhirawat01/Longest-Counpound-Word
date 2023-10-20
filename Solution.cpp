#include <iostream>
#include <vector>
#include <unordered_set>
#include <functional>

std::vector<std::string> findAllConcatenatedWordsInADict(std::vector<std::string>& words) {
    std::unordered_set<std::string> wordSet(words.begin(), words.end());
    std::vector<std::string> ans;
    
    std::function<bool(std::string)> isConcat = [&](std::string word) -> bool {
        for (int i = 1; i < word.length(); i++) {
            std::string prefix = word.substr(0, i);
            std::string suffix = word.substr(i);
            if (wordSet.count(prefix) && (wordSet.count(suffix) || isConcat(suffix))) {
                return true;
            }
        }
        return false;
    };
    
    for (const std::string& word : words) {
        if (isConcat(word)) {
            ans.push_back(word);
        }
    }
    
    return ans;
}

std::pair<std::string, std::string> two_largest_word(std::vector<std::string>& words) {
    if (words.empty()) {
        return std::make_pair("", "");
    }
    
    std::string longest_word = "";
    std::string second_longest_word = "";
    
    for (const std::string& w : words) {
        if (w.length() > longest_word.length()) {
            second_longest_word = longest_word;
            longest_word = w;
        } else if (w.length() > second_longest_word.length() && w != longest_word) {
            second_longest_word = w;
        }
    }
    
    return std::make_pair(longest_word, second_longest_word);
}

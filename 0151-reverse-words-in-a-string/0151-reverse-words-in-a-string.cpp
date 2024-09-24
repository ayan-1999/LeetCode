class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        
        // Iterate through the string to form words
        for (char c : s) {
            if (c != ' ') {
                word += c;  // Add characters to form a word
            } else if (!word.empty()) {
                ans = word + " " + ans;  // Prepend the word to the result
                word = "";  // Reset the word
            }
        }
        
        // Add the last word (if any) to the result when there is no space at the end 
        //so upper loop doesn't add the last word
        if (!word.empty()) {
            ans = word + " " + ans;
        }
        
        // Remove the trailing space
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        
        return ans;
    }
};

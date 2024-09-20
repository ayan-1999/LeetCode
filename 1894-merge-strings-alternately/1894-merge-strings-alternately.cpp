class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        int i=0;
        int j=0;
        string ans;
            while(i<m || j<n){
                if(i<m){
                    ans.push_back(word1[i]);
                    i++;
                }
                if(j<n){
                     ans.push_back(word2[j]);
                    j++;
                }
            }
       
      return ans;                 
    }
};
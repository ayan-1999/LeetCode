class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int lastSpace=-1,lastChar=-1,word=0;
        for(int i=0;i<s.length();i++)
        {  
           
            if(s[i]==' ')
            {
               lastSpace =i;
            }
            else
               lastChar=i;
            
            if(lastSpace<lastChar)
            word=lastChar-lastSpace;

        }
        return word;
        
    }
};
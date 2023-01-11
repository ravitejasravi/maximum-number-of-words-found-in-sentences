class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int result = 0;
        int count;

        for(int i = 0; i < sentences.size(); i++) {

            count = 1;

            for(int j = 0; j < sentences[i].length(); j++) 
                if(sentences[i][j] == ' ') 
                    count += 1;
                 
            result = max(result, count);
        }
        
        return result;
    }
};
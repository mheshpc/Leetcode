class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        string temp = first;
        for (int i=0; i<strs.size(); i++){
            cout<<"we are at "<<strs[i]<<" ";
            if (strs[i]==temp){
                continue;
            } //we now need to compare the first chars of
            // temp and strs[i]
            char firstChar = strs[i][0];
            if (firstChar != temp[0]){
                temp = "";
                return temp;
            }
            //now we compare the rest of temp with strs[i]
            
            
            string newTemp = "";
            for (int j=0; j<temp.size(); j++){
                if (temp[j] == strs[i][j]){
                    newTemp.push_back(temp[j]);
                    continue;
                } else {
                    temp = newTemp;
                    break;
                }
            }
        } 
        return temp;
    }
};
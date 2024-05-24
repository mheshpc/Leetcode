class Solution {
    public String reverseWords(String s) {
        //iterate through s till you reach whitespace
        //all the while building a string
        //append this to a string 'result'
        //keep appending to the start of 'result'
        StringBuilder result = new StringBuilder("");
        String[] words = s.split("\\s+");
        for (String word : words){
            word = word.trim();
            System.out.println(word + "\n");
            if (word != " " && word!=""){result.insert(0, word);}
            result.insert(0, " ");
        }
        //remove the first space
        result.deleteCharAt(0);
        if ((result.charAt(result.length()-1)) == ' '){result.deleteCharAt(result.length()-1);}
        return result.toString();
    }
}
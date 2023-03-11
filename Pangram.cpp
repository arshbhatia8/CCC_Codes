class Result {

    /*
     * Complete the 'isPangram' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING_ARRAY pangram as parameter.
     */
     static String ans = "";

     public static boolean checkPangram(String str)
    {
        
        boolean[] mark = new boolean[26];
 
        
        int index = 0;
 
        
        for (int i = 0; i < str.length(); i++) {
            
            if ('A' <= str.charAt(i)
                && str.charAt(i) <= 'Z')
                index = str.charAt(i) - 'A';
 
            
            else if ('a' <= str.charAt(i)
                     && str.charAt(i) <= 'z')
 
                index = str.charAt(i) - 'a';
 
            
            else
                continue;
            mark[index] = true;
        }
 
        
        for (int i = 0; i <= 25; i++)
            if (mark[i] == false)
                return (false);
 
        
        return (true);
    }

    public static String isPangram(List<String> pangram) {
    // Write your code here
        for(int i = 0; i<pangram.size(); i++){
            if (checkPangram(pangram.get(i)) == true)
                ans = ans + "1";
            else
            ans = ans + "0";
        }
        return ans;
    }
}

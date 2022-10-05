public class FinalValueOfVariable {
    public int finalValueAfterOperations(String[] operations) {
        int ans = 0;
        int x = 0;
        for(int i=0;i<operations.length;i++){
            String str =operations[i];
            int j=1;
            if (str.charAt(j)=='-' ){
               x=x-1;
            }
            else {
             x=x+1;
            }
        }
            ans = x ;
        return ans;
        
}
}


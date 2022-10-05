public class plusOne {
    public int[] plusOne(int[] digits) {
int n = digits.length;
for (int i=n-1;i>=0;i--){
    if (digits[i]<9){
        digits[i]++;
        return digits;
    }
    digits[i]=0;
}
int ans[] = new int [n+1];
 ans[0]=1;
 return ans ;
}

// 1 2 3
// output 1 2 4 

}
//  time complexity is n

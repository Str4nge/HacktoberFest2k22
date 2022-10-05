public class MissingNumber {
    public int missingNumber(int[] nums) {

     int sum = (nums.length*(nums.length+1))/2;
    //  n=2 ---> sum (2*3)/2 -->3
     for(int i=0; i<nums.length; i++){
         sum = sum - nums[i];
     }

    //   sum =3 ---> 3-0 ---> 3-1 ---> 2 so this is the missing no.
     return sum;

    //   in this ques we have to include all the numbers jitne length ki array hai jaise agar array mai [0,1] hai toh 
    //  2 elements hai array mai so array should have [0,1,2] missing no. is 2 

    }
}

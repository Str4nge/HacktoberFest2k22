public class RemoveDuplicatesArray{
    public static int RemoveDuplicatesArray(int [] nums){
        
        if (nums.length==0 || nums.length==1){
            return nums.length;
        }
        int temp[]=new int [nums.length];
        int j=0;
        for (int i=0;i+1<nums.length;i++)
{         
        if (nums[i]!=nums[i+1]){
            temp[j]=nums[i];
            j++;
            
        }        
}  
temp[j]=nums[nums.length-1];
j++;    

for (int i=0;i<j;i++){
nums[i]=temp[i];
}
        return j;
    }

    //  time complexity is n 
    public static void main (String [] args){
     
     int ans [] ={1,1,2,2,3};
     int finalans=RemoveDuplicatesArray(ans);
     System.out.println(finalans);

    }
}
// j=0  --- 1
// i+1 ---> 4

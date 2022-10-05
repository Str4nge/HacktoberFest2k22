public class SortArrayByParity {
    public static int[] sortArrayByParity(int[] nums) {
int i=0;
int j=0;
for (i=0,j=0;j<nums.length;j++){
    if (nums[j]%2==0){
        int temp =nums[i];
        nums[i++]=nums[j];
        nums[j]=temp;
    }
}
  return nums; 
 }

public static void main (String[] args){
    int arr []={3,2,1,4};
int ans [] =new int [arr.length];
ans = sortArrayByParity(arr);

for (int i=0;i<ans.length;i++){
    System.out.println(ans[i]+" ");
}
}
}
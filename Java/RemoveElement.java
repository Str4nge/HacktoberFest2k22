public class RemoveElement{
    public int removeElement(int[] nums, int val) {

int temp[]=new int [nums.length];
int j=0;
for (int i=0;i<nums.length;i++){
    if (nums[i]!=val){
       temp[j]=nums[i];
       j++;
    }
}
for (int i=0;i<temp.length;i++){
    nums[i]=temp[i];
}

return j;


}
// 3  2 2 3
}
//  time complexity is n
public class SearchInsertPosition {
    public int searchInsert(int[] nums, int target) {
     
        int i=0;
        while (i<nums.length){
         if (nums[i]==target){
            return i;
         }
         else {
            i++;
         }
        }
        i=0;
        while (i<nums.length){
            if (nums[i]>target){
              return i;
            }
            else {
                i++;
            }
        }
        return nums.length;


    }    
}

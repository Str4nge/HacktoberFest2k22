import java.util.HashMap;
import java.util.Map;

public class ContainsDuplicate2 {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer,Integer> m = new HashMap<>();
        for(int i = 0 ; i < nums.length; i++){
            if(m.containsKey(nums[i])){
                if(i - m.get(nums[i])  <= k) return true;
            }
            m.put(nums[i],i);
        }
        return false;
    }
}

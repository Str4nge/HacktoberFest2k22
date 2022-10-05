
public class LinearSearch{
    public static int linearsearch (int []arr,int x){
        for (int i=0;i<arr.length;i++){
            if (arr[i]==x){
                return i+1;
            }
        }
        return 0;
    }
    public static void main (String [] args){
        int arr[]={1,2,3,4,5};
        int ans = linearsearch(arr, 2);
        System.out.println(ans);
    }
}
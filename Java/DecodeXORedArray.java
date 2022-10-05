public class DecodeXORedArray {
    public int[] decode(int[] encoded, int first) {

        int[] arr=new int[encoded.length+1];
        arr[0]=first;
        for(int i=1; i<arr.length; i++){
            arr[i]=arr[i-1]^encoded[i-1];
        }
        return arr;

}
}
class Solution {
    public int[] buildArray(int[] nums) {
        int j;
        int[] arr=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            j=nums[i];
            arr[i]=nums[j];
            
        }
        return arr;
    }
    
    
}
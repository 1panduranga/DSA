import java.util.ArrayList;
import java.util.Arrays;

public class BubbleSort {
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(30,13,56,15,12,5,7,1));
    sort(nums);
    System.out.println("Sorted array : " + nums);
  }

  public static void sort(ArrayList<Integer> nums){
    for(int j=nums.size()-1; j>0 ; j--){
      for(int i = 0; i<j; i++){
        if(nums.get(i) > nums.get(i+1)){
          int temp = nums.get(i);
          nums.set(i, nums.get(i+1));
          nums.set(i+1, temp);
        }
      }
    }
  }
}

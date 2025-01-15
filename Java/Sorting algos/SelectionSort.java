import java.util.ArrayList;
import java.util.Arrays;

public class SelectionSort {
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(30,13,56,15,12,5,7,1));
    sort(nums);
    System.out.println("Sorted array : " + nums);
  }

  public static void sort(ArrayList<Integer> nums){

    int leastIndex = -1;
    int leastNum = 0;
    int temp = 0;

    for(int i=0; i<nums.size()-1; i++){
      leastIndex = i;
      leastNum = nums.get(leastIndex);
      for(int j = i+1; j<nums.size(); j++){
        if(leastNum > nums.get(j)){
          leastIndex = j;
          leastNum = nums.get(leastIndex);
        }
      }
      temp = nums.get(i);
      nums.set(i, leastNum);
      nums.set(leastIndex, temp);
    }
  }

}

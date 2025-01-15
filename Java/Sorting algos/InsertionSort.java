import java.util.ArrayList;
import java.util.Arrays;

public class InsertionSort {
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(30,13,56,15,12,5,7,1));
    sort(nums);
    System.out.println("Sorted array : " + nums);
  }

  public static void sort(ArrayList<Integer> nums){

    int j;
    int curentNum;

    for(int i=1; i<nums.size(); i++){
      j = i-1;
      curentNum = nums.get(i);
      while (j>=0 && nums.get(j)>curentNum){
        // shift values if you are using normal array
        j--;
      }
      nums.remove(i);
      nums.add(j+1,curentNum);
    }
  }

}

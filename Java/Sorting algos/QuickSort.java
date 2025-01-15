import java.util.ArrayList;
import java.util.Arrays;

public class QuickSort {
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(30,13,56,15,12,5,7,1));
    sort(nums, 0, nums.size()-1);
    System.out.println("Sorted array : " + nums);
  }

  public static void sort(ArrayList<Integer> nums, int start, int end){
    int pivot = end;
    int pointer = start-1;

    if(start < end){
      for(int i = start; i<end; i++){
        if(nums.get(i)<nums.get(pivot)){
          pointer++;
          swap(nums, pointer, i);
        }
      }

      pointer++;
      swap(nums, pointer, pivot);
      sort(nums, start, pointer-1);
      sort(nums, pointer+1, end);
    }
  }

  public static void swap(ArrayList<Integer> nums, int index1, int index2){
    int temp = nums.get(index1);
    nums.set(index1, nums.get(index2));
    nums.set(index2, temp);
  } 

}

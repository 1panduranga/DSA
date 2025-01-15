import java.util.ArrayList;
import java.util.Arrays;

public class MergeSort {
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(30,13,56,15,12,5,7,1));
    sort(nums, 0, nums.size()-1);
    System.out.println("Sorted array : " + nums);
  }

  public static void sort(ArrayList<Integer> nums, int start, int end){
    if(start < end){
      int mid = (start + end)/2;
      sort(nums, start, mid);
      sort(nums, mid+1, end);
      merge(nums, start, mid, end);
    }
  }

  public static void merge(ArrayList<Integer> nums, int start, int mid, int end){

    ArrayList<Integer> leftArr = new ArrayList<>(nums.subList(start, mid+1));
    ArrayList<Integer> rightArr = new ArrayList<>(nums.subList(mid+1, end+1));

    int pointer1 = 0;
    int pointer2 = 0;

    // logic 1

    for(int i= start; i<=end; i++){
      if(pointer1<leftArr.size() && ((pointer2 >= rightArr.size()) || (leftArr.get(pointer1) < rightArr.get(pointer2)))){
        nums.set(i,leftArr.get(pointer1));
        pointer1++;
      }
      else{
        nums.set(i,rightArr.get(pointer2));
        pointer2++;
      }
    }


    // logic 2 (simple)

    // int mainPointer = start;

    // while(pointer1<leftArr.size() && pointer2<rightArr.size()){
    //   if((leftArr.get(pointer1) < rightArr.get(pointer2))){
    //     nums.set(mainPointer,leftArr.get(pointer1));
    //     pointer1++;
    //   }
    //   else{
    //     nums.set(mainPointer,rightArr.get(pointer2));
    //     pointer2++;
    //   }
    //   mainPointer++;
    // }

    // while(pointer1<leftArr.size()) {
    //   nums.set(mainPointer,leftArr.get(pointer1));
    //   pointer1++;
    //   mainPointer++;
    // }

    // while(pointer2<rightArr.size()) {
    //   nums.set(mainPointer,rightArr.get(pointer2));
    //   pointer2++;
    //   mainPointer++;
    // }
  }
}

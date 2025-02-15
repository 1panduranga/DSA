import java.util.Scanner;

public class BinarySearch {
  public static void main(String[] args){
    int[] nums = {2,3,5,12,35,56};
    Scanner myScanner = new Scanner(System.in);
    System.out.print("Enter number to search : ");
    int num = myScanner.nextInt();

    int index = search(nums, num);
    System.out.println(index!=-1 ? (num + " found at index " + index) : (num + " not found"));
    
    myScanner.close();
  }

  public static int search(int[] nums, int num){
    int start = 0;
    int end = nums.length - 1;

    while(start <= end){
      int mid = (start + end)/2;
      if(nums[mid] == num){
        return mid;
      }
      else if(nums[mid] > num){
        end = mid - 1;
      }
      else if(nums[mid] <  num){
        start = mid + 1;
      }
    }
    return -1;
  }
}

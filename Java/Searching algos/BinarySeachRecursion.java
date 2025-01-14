import java.util.Scanner;

public class BinarySeachRecursion{
  public static void main(String[] args){
    int[] nums = {2,3,5,12,35,56};
    Scanner myScanner = new Scanner(System.in);
    System.out.print("Enter number to search : ");
    int num = myScanner.nextInt();

    int index = search(nums, num, 0, nums.length - 1);
    System.out.println(index!=-1 ? (num + " found at index " + index) : (num + " not found"));
    
    myScanner.close();
  }

  public static int search(int[] nums, int num, int start, int end){
    if(start<=end){
      int mid = (start+end)/2;
      if(nums[mid] == num){
        return mid;
      }
      else if (nums[mid] < num){
        return search(nums, num, mid + 1, end);
      }
      else if (nums[mid] > num){
        return search(nums, num, 0, mid - 1);
      }
    }
    return -1;
  }
}
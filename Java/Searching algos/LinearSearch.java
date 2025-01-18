import java.util.Scanner;

public class LinearSearch {
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
    for(int i=0; i<nums.length;i++){
      if(nums[i] == num){
        return i;
      }
    }
    return -1;
  }
}

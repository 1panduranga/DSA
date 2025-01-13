import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<Integer>(Arrays.asList(2,4,5,6,12,20,45,66,77));
    Scanner myScanner = new Scanner(System.in);
    System.out.print("Enter a number to search : ");
    int searchNum = myScanner.nextInt();

    int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
      int mid = (start + end)/2;
      int midNum = nums.get(mid);
      if(midNum == searchNum){
        System.out.println("found " + searchNum + " at index " + mid);
        break;
      }
      else if (midNum > searchNum){
        end = mid - 1;
      }
      else if(midNum < searchNum){
        start = mid + 1;
      }

      if(start > end ){
        System.out.println("Did not find " + searchNum);
      }
    }

    myScanner.close();
  }
}

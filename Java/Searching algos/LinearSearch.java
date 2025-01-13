import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class LinearSearch{
  public static void main(String[] args){
    ArrayList<Integer> nums = new ArrayList<Integer>(Arrays.asList(1,2,3,4,5,6,7,8,9));
    Scanner myScanner = new Scanner(System.in);
    System.out.print("Enter number to search : ");
    int searchNum = myScanner.nextInt();

    for (int i=0; i<nums.size(); i++){
      if(searchNum == nums.get(i)){
        System.out.println("Found " + searchNum + " at index " + i );
        break;
      }
      else if(i == nums.size()-1){
        System.out.println(searchNum + " not found in the array");
      }
    }

    myScanner.close();
  }
}
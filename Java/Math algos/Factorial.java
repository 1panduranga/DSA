import java.util.Scanner;

public class Factorial {
  public static void main(String[] args) {
    System.out.println("Enter a number");
    Scanner myScanner = new Scanner(System.in);
    int num = myScanner.nextInt();

    System.out.println(findFactorial(num));

    myScanner.close();
  }

  public static int findFactorial(int num){
    if(num == 0){
      return 1;
    }
    return num * findFactorial(num-1);
  }
}

public class Stack {
  
  int[] arr = new int[4];
  int top;
  int size;

  Stack(){
    top = -1;
    size = arr.length;
  }

  public void push(int value){
    if(top<size-1){
      arr[++top] = value;
    }
    else{
      System.err.println("Stack over flow");
    }
  }

  public Integer pop(){
    if(top == -1){
      return null;
    }
    else{
      return arr[top--];
    }
  }

  public Integer peek(){
    if(top == -1){
      return null;
    }
    else{
      return arr[top];
    }
  }

  public void printValues(){
    for(int i=0; i<=top; i++){
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void main(String[] args){
    Stack myStack = new Stack();
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
     myStack.pop();   
    System.out.println(myStack.peek());
    myStack.printValues();
  }
}

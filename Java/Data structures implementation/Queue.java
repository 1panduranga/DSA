public class Queue {
  
  int[] arr = new int[5];
  int top;
  int size;

  public Queue(){
    top = -1;
    size = arr.length;
  }
  
  public void push(int val){
    if(top==size){
      poll();
    }
    arr[++top] = val;
  }
  
  public Integer poll(){
    if(top == -1){
      return null;
    }
    else{
      int val = arr[0];
      for(int i =1; i<size; i++){
        arr[i-1] = arr[i];
      }
      top--;
      return val;
    }
  }

  public Integer peek(){
    if(top == -1){
      return null;
    }
    else{
      return arr[0];
    }

  }

  public void print(){
    if(top == -1){
      System.out.println("Queue is empty");
    }
    else{
      for(int i=0; i<=top;i++){
        System.out.print(arr[i] + " ");
      }
      System.out.println();
    }
  }

  public static void main(String[] args){
    Queue myQ = new Queue();
    myQ.push(2);
    myQ.push(3);
    myQ.push(4);
    myQ.push(5);
    myQ.push(6);
    System.out.println(myQ.peek());
    System.out.println(myQ.poll());
    myQ.print();
  }
}

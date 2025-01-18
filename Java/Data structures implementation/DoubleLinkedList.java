class Node{
  int value;
  Node next;
  Node previous;

  public Node(int value){
    this.value = value;
    next = null;
    previous = null;
  }
}
public class DoubleLinkedList {
  Node head = null;

  public void addFirst(int value){
    Node newNode = new Node(value);
    if(head == null){
      head = newNode;
    }
    else{
      newNode.next = head;
      head.previous = newNode;
      head = newNode;
    }
  }

  public void addLast(int value){
    Node newNode = new Node(value);
    if(head == null){
      head = newNode;
    }
    else{
      Node current = head;
      while(current.next != null){
        current = current.next;
      }
      current.next = newNode;
      newNode.previous = current;
    }
  }

  public Integer peekFirst(){
    return (head!=null) ? head.value : null;
  }

  public Integer peekLast(){
    if(head == null){
      return null;
    }
    Node current = head;
    while(current.next!=null) {
      current = current.next;
    }
    return current.value;
  }

  public Integer pollFirst(){
    if(head == null){
      return null;
    }
    else{
      int val = head.value;
      head.next.previous = null;
      head = head.next;
      return val;
    }

  }

  public Integer pollLast(){
    if(head == null){
      return null;
    }
    else{
      Node current = head;
      while(current.next != null){
        current = current.next;
      }
      int val = current.value;
      current.previous.next = null;
      return val;
    }
  }

  public void delete(int value){
    if(head == null){
      System.out.println("Nothing to delete");
      return;
    }
    else{
      Node current = head;
      while(current != null && current.value != value){
        current = current.next;
      }
    }
  }

  public void printFwd(){
    if(head == null){
      System.out.println("Nothing to print");
    }
    else{
      Node current = head;
      while(current!=null){
        System.out.print(current.value + " ");
        current = current.next;
      }
      System.out.println();
    }
  }

  public void printBwd(){
    if(head == null){
      System.out.println("Nothing to print");
      return;
    }
    Node current = head;
    while (current.next!=null) {
      current = current.next;
    }
    while (current!=null) {
      System.out.print(current.value + " ");
      current = current.previous;
    }
    System.out.println();
  }

  public static void main(String[] args) {

    DoubleLinkedList myDLL = new DoubleLinkedList();

    myDLL.addFirst(2);
    myDLL.addFirst(5);
    myDLL.addFirst(4);
    myDLL.addLast(7);
    myDLL.printFwd();
    myDLL.printBwd();
    System.out.println(myDLL.peekFirst());
    System.out.println(myDLL.peekLast());
    System.out.println(myDLL.pollLast());
    myDLL.printFwd();
  }
}

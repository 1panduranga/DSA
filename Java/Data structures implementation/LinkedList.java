class Node{
  int value;
  Node next;

  public Node(int value){
    this.value = value;
    next = null;
  }
}

public class LinkedList {
    Node head = null;

    public void add(int value){
      Node newNode = new Node(value);
      if(head == null){
        head = newNode;
      }
      else{
        Node currentNode = head;
        while(currentNode.next != null){
          currentNode = currentNode.next;
        }
        currentNode.next = newNode;
      }
    }

    public void addFirst(int value){
      Node newNode = new Node(value);
      newNode.next = head;
      head = newNode;
    }

    public void delete(int value){
      if(head == null){
        System.out.println("Nothing to delete");
        return;
      }
      if(head.value == value){
        head = head.next;
        return;
      }
      Node currentNode = head;
      while (currentNode.next != null && currentNode.next.value != value) {
        currentNode = currentNode.next;
      } 
      
      if(currentNode.next != null){
        currentNode.next = currentNode.next.next;
      }
      else{
        System.out.println("Did not find "+ value +" to delete");
      }
    }

    public void printValues(){
      if(head == null){
        System.out.println("No values in the linked list at the moment");
        return;
      }
      
      Node currentNode = head;
      while(currentNode != null){
        System.out.print(currentNode.value + " ");
        currentNode = currentNode.next;
      }
      System.out.println();
    }

    public static void main(String[] args){
      LinkedList myLL = new LinkedList();

      myLL.add(5);
      myLL.add(2);
      myLL.add(10);
      myLL.add(7);
      myLL.delete(22);
      myLL.printValues();
    }
}
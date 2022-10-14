import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Scanner;


//To create the node 
//Structure of the node
class huffmanNode
{
    int freq;
    char c;
    huffmanNode left = null;
    huffmanNode right = null;
}

//comapare the node and sort in ascending order
class MyComparator implements Comparator<huffmanNode> {
    public int compare(huffmanNode x, huffmanNode y)
    {
 
        return x.freq - y.freq;
    }
}

public class huffman_codig {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        //Finding the frequency of all char and storing in map.
        Map<Character, Integer> mp = new HashMap<>();
        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            mp.put(ch, mp.getOrDefault(ch, 0)+1);
        }

        //store the map in priorityQueue
        PriorityQueue<Map.Entry<Character, Integer>> que = new PriorityQueue<>((a,b) -> Integer.compare(b.getValue(), a.getValue()));
        for(Map.Entry<Character, Integer> entry: mp.entrySet()) 
        {
            que.offer(entry); 
        }





        //make the priorityQueue of object of node
        PriorityQueue<huffmanNode> q
            = new PriorityQueue<huffmanNode>( new MyComparator());
 
            int size = que.size();

        for (int i = 0; i < size; i++) {
 
            // creating a Huffman node object
            // and add it to the priority queue.
            huffmanNode hn = new huffmanNode();
 
            hn.c = que.peek().getKey();
            hn.freq = que.poll().getValue();
 
            hn.left = null;
            hn.right = null;
 
            // add functions adds
            // the huffman node to the queue.
            q.add(hn);
        }


        huffmanNode root = null;

        while(q.size()>1)
        {
            // first min extract.
            huffmanNode x = q.peek();
            q.poll();
 
            // second min extract.
            huffmanNode y = q.peek();
            q.poll();
 
            // new node f which is equal
            huffmanNode f = new huffmanNode();
 
            // to the sum of the frequency of the two nodes
            // assigning values to the f node.
            f.freq = x.freq + y.freq;
            f.c = '-';
 
            // first extracted node as left child.
            f.left = x;
 
            // second extracted node as the right child.
            f.right = y;
 
            // marking the f node as the root node.
            root = f;
 
            // add this node to the priority-queue.
            q.add(f);

        }


        printCode(root, "");







        // //Find the freq of each unique char.
        // int size = que.size();
        // for(int i=0; i<size; i++)
        // {
        //     System.out.println(que.peek().getKey() + " :" +que.poll().getValue());
        // }

    }

    public static void printCode(huffmanNode root, String s)
    {
        //return because now it won't read further
        if(root.left == null && root.right == null)
        {
            System.out.println(root.c + " :" + s);

            return;
        }

        //if not then go further
        printCode(root.left, s + "0");
        printCode(root.right, s + "1");

    }
}





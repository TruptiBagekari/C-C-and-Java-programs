import java.util.*;

class Collections7
{
    public static void main(String arg[])
    {
       Stack <Character>sobj = new Stack<Character>();

       sobj.push('a');
       sobj.push('b');
       sobj.push('c');
       sobj.push('d');
       sobj.add('e');

       System.out.println("Elements of Stack : "+sobj);

       System.out.println("Poped Element is : "+sobj.pop());

        System.out.println("Elements of Stack : "+sobj);

    }
}
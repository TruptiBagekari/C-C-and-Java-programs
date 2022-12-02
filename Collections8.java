import java.util.*;

class Collections7
{
    public static void main(String arg[])
    {
       Hashtable <String, Integer>hobj = new Hashtable<String, Integer>();

       hobj.put("PPA", 18000); //(key,value)
       hobj.put("LB", 17000);
       hobj.put("python",16500);
       hobj.put("LSP",21000);

        System.out.println(hobj.get("python"));

        hobj.remove("LB");

       Enumeration eobj = hobj.keys(); //(hobj.ppa vaigere)

       while(eobj.hasMoreElements())
       {
        System.out.println("Value is "+eobj.nextElement());
       }

      
    }
}    
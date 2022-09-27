import java.util.*;

public class HashMapInJava {
    public static void main(String[] args) {
        HashMap<String, Integer> m = new HashMap<String, Integer>();
        m.put("messi", 10);
        m.put("ronaldo", 7);
        m.put("suarez", 9);

        System.out.println(m);
        System.out.println(m.size());

        for (Map.Entry<String, Integer> e : m.entrySet())
            System.out.println(e.getKey() + " " + e.getValue());

        if (m.containsKey("messi"))
            System.out.println("YES!");
        else
            System.out.println("NO!");

        System.out.println(m.get("messi"));

        m.remove("ronaldo");
        System.out.println(m.size());
    }
}

import java.util.*;

class Test {
    public static void main(String[] args) {
        HashSet<String> h = new HashSet<String>();
        h.add("federer");
        h.add("nadal");
        h.add("djokovic");

        System.out.println(h);

        System.out.println(h.contains("nadal"));

        System.out.println();

        Iterator<String> i = h.iterator();
        while (i.hasNext())
            System.out.print(i.next() + " ");

        System.out.println();

        System.out.println(h.size());
        h.remove("djokovic");
        System.out.println(h.size());

        for (String s : h)
            System.out.println(s + " ");

        System.out.println(h.isEmpty());
    }
}
import java.util.*;

class CountDistinct {

    static int countDistinctEff(Integer arr[]) {
        // creates arraylist from existing array, on top of that existing array, doesn't
        // allocate new memory for array items
        HashSet<Integer> s = new HashSet<>(Arrays.asList(arr));
        return s.size();
    }

    public static void main(String[] args) {

        HashSet<Integer> h = new HashSet<Integer>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements you want to store: ");
        // reading the number of elements from the that we want to enter
        int n = sc.nextInt();
        // creates an array in the memory of length 10
        int[] array = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            // reading array elements from the user
            array[i] = sc.nextInt();
            h.add(array[i]);
        }
        sc.close();
        System.out.println(h.size());

        Integer effArr[] = { 10, 20, 30, 10, 20 };
        System.out.println(countDistinctEff(effArr));
    }
}
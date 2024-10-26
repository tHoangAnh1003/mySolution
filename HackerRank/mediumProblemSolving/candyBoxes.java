import java.util.*;

public class candyBoxes {

    public static int binarySearch(List<Long> arr, long k) {
        int low = 0;
        int high = arr.size() - 1;

        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            long value = arr.get(mid);

            if (value >= k) {
                ans = mid + 1;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < n; ++i) {
            int value = sc.nextInt();
            arr.add(value);
        }

        List<Long> arr2 = new ArrayList<>();
        arr2.add(1L * arr.get(0));

        for (int i = 1; i < n; ++i) {
            arr2.add(arr2.get(i - 1) + arr.get(i));
        }

        int q = sc.nextInt();

        for (int i = 0; i < q; ++i) {
            long k = sc.nextLong();

            int ans = binarySearch(arr2, k);

            System.out.println(ans);

        }

        sc.close();
    }
}
import java.util.*;

public class Bai3 {

	public static int upperBound(List<Integer> arr, int n, int k) {
		int low = 0;
		int high = n - 1;
		int ans = 0;
		while (low <= high) {
			int mid = (low + high) / 2;

			int value = arr.get(mid);
			if (k <= value) {
				ans = value;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		
		List<Integer> arr = new ArrayList<>();

		for (int i = 0; i < n; ++i) {
			int temp = sc.nextInt();
			arr.add(temp);
		}

		arr.sort(new Comparator<Integer>(){
			public int compare(Integer a, Integer b) {
				return a - b;
			}
		});

		int ans = upperBound(arr, n, k);

		if (ans != 0) {
			System.out.println(ans);
		} else {
			System.out.println("FA NOEL");
		}
		
		sc.close();
	}
}

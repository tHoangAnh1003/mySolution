import java.util.*;

public class Bai3 {
	private int n;
	private int q;
	private int k;
	private List<Integer> arr = new ArrayList<>();

	public Bai3() {
		solve();
	}

	public int upperBound() {
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

	public void solve() {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		q = sc.nextInt();

		for (int i = 0; i < n; ++i) {
			int temp = sc.nextInt();
			arr.add(temp);
		}

		arr.sort(new Comparator<Integer>(){
			public int compare(Integer a, Integer b) {
				return a - b;
			}
		});

		for (int i = 0; i < q; ++i) {
			k = sc.nextInt();

			int ans = upperBound();

			if (ans != 0) {
				System.out.println(ans);
			} else {
				System.out.println("FA NOEL");
			}

		}
		
		sc.close();
	}

	public static void main(String[] args) {
		new Bai3();
	}
}

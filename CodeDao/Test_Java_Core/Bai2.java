import java.util.Scanner;

public class Bai2 {

	private int n;
	private int k;

	public Bai2() {
		solve();
	}

	public boolean checkPrime(int n) {
		for (int i = 2; i <= Math.sqrt(n); ++i) {
			if (n % i == 0) {
				return false;
			}
		}

		return n > 1;
	}

	public int sumDigit(int n) {
		int sum = 0;
		while (n > 0) {
			sum += (n % 10);
			n /= 10;
		}
		return sum;
	}

	public void solve() {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k = sc.nextInt();

		for (int i = 0; i < n; ++i) {
			int temp = sc.nextInt();
			if (sumDigit(temp) % k == 0 && checkPrime(temp)) {
				System.out.print(temp + " ");
			}
		}
		
		sc.close();
	}

	public static void main(String[] args) {
		new Bai2();
	}
}

import java.util.Scanner;

public class Bai1 {

	private long n;
	private int a;
	private int b;

	public Bai1() {
		solve();
	}

	public void solve() {
		Scanner sc = new Scanner(System.in);

		n = sc.nextLong();
		a = sc.nextInt();
		b = sc.nextInt();

		if (a <= b / 2) {
			System.out.println(a * n);
		} else {
			if (b % 2 == 0) {
				System.out.println((b / 2 * n));
			} else {
				System.out.println((b - 1) / 2 * n + a);
			}
		}

        sc.close();
	}

	public static void main(String[] args) {
		new Bai1();
	}
}

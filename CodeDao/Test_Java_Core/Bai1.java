import java.util.Scanner;

public class Bai1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		long n = sc.nextLong();
		int a = sc.nextInt();
		int b = sc.nextInt();

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
}

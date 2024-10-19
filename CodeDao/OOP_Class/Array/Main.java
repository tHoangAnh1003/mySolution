import java.util.*;

public class Main {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];

        for (int i = 0; i < n; ++i){
            array[i] = sc.nextInt();
        }

        for (int i = 0; i < n; ++i){
            if (array[i] % 2 == 0){
                array[i] /= 2;
            }
            else {
                array[i] += 1;
            }
        }

		// Arrays.sort(array);
        // Collections

        Arrays.sort(array, Collections.reverseOrder());

		for (int i = 0; i < n; ++i) {
			System.out.print(array[i] + " ");
		}

    }
}
package CodeDao.OOP_Class.Array;


import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class Array_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Nhap vao mot mang n phan tu va nhap k. Kiem tra xem phan tu k xuat hien bao nhieu lan
        /**
         * INPUT: 10
         * 1 3 5 8 2 10 2 15 20 14
         * 2
         * OUTPUT: 3
         */
        int n = sc.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = sc.nextInt();
        }
        int k = sc.nextInt();

        int minValue = array[0];
        int maxValue = array[0];
        for (int i = 0; i < n; ++i) {
            minValue = Math.min(minValue, array[i]);
            maxValue = Math.max(maxValue, array[i]);
        }
        System.out.println();
    }

}

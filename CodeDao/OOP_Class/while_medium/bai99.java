package CodeDao.OOP_Class.while_medium;

public class bai99 {
    
    public static void main(String[] args) {
        int n = 54321;

        int a = n % 10;
        n /= 10;

        boolean flag = false;

        while (n > 0) {
            int temp = n % 10;

            if (temp <= a) {
                flag = true;
                break;
            }

            n /= 10;
        }

        if (flag) {
            System.out.println("False");
        } else {
            System.out.println("True");
        }

    }
}

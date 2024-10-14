package CodeDao.OOP_Class.while_medium;


public class bai96 {
    
    public static void main(String[] args) {
        int n = 2468286; // number for test

        int a = n % 10;
        n /= 10;

        boolean flag = true;

        while (n > 0) {
            int temp = n % 10;

            if ((temp % 2) != (a % 2)) {
                flag = false;
            }
            
            n /= 10;
        }

        if (flag) {
            System.out.println((a % 2 == 0) ? "So toan chan" : "So toan le");
        } else {
            System.out.println("N khong phai so toan chan hoac toan le");
        }

    }
    
}


package CodeDao.OOP_Class.while_medium;

public class bai97 {
    
    public static void main(String[] args) {
        int n = 679;
        
        int index = 0;
        int maxVal = -1;
        int indexReal = 0;

        while (n > 0) {
            int a = n % 10;

            index += 1;

            if (maxVal < a) {
                maxVal = a;
                indexReal = index;
            }

            n /= 10;
        }

        if (indexReal == 1) {
            System.out.println("Nam o hang don vi");
        } else if (indexReal == 2) {
            System.out.println("Nam o hang chuc");
        } else if (index == 3) {
            System.out.println("Nam o hang tram");
        } else {
            System.out.println("Nam o hang nghin");
        }

    }
}

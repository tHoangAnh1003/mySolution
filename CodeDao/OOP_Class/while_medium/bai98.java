package CodeDao.OOP_Class.while_medium;

public class bai98 {
    
    public static void main(String[] args) {
        int n = 291;

        int so1 = 0, so2 = 0, so3 = 0;
        int index = 0;

        while (n > 0) {
            int a = n % 10;
            if (index == 0) {
                so1 = a;
            } else if (index == 1) {
                so2 = a;
            } else {
                so3 = a;
            }
            index += 1;
            n /= 10;
        }

        int maxVal = Math.max(so3, Math.max(so1, so2));
        int minVal = Math.min(so3, Math.min(so1, so2));
        int mediumVal = 0;
        if (so1 != minVal && so1 != maxVal) {
            mediumVal = so1; 
        } else if (so2 != maxVal && so2 != minVal) {
            mediumVal = so2;
        } else {
            mediumVal = so3;
        }

        System.out.println(minVal + "" + mediumVal + "" + maxVal);
    }
}

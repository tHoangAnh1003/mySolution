public class Week4 {
    public static int max2Int(int a, int b) {
	// Tim gia tri lon nhat cua hai so nguyen
        return (a > b) ? a : b;
    }

    public static int minArray (int[] array) {
	// Tim gia tri nho nhat cua 1 mang so nguyen
        int sonhonhat = array[0];
        for (int i = 1; i < array.length; ++i) {
            if (array[i] < sonhonhat) {
                sonhonhat = array[i];
            }
        }

        return sonhonhat;
    }

    public static String calculateBMI(double weight, double height){
	// Tinh BMI
        double ans = weight / Math.pow(height, 2);
        ans = Math.round(ans * 10.0) / 10.0;

        String ketqua = "";
        if (ans >= 25) {
            ketqua = "Béo phì";
        } else if (ans >= 23) {
            ketqua = "Thừa cân";
        } else if (ans >= 18.5) {
            ketqua = "Bình thường";
        } else {
            ketqua = "Thiếu cân";
        }

        return ketqua;
    }
}
 
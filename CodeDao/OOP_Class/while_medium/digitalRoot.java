package CodeDao.OOP_Class.while_medium;

public class digitalRoot
{
	public static void main(String[] args) {
	    long n = 122423423423L; // number for test 
	    
	    while (n >= 10) {
	        long sum = 0;
	        while (n > 0) {
	            sum += (n % 10);
	            n /= 10;
	        }
	        n = sum;
	    }
	    
	    System.out.println(n);
	}
}
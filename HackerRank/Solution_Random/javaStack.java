import java.util.*;
class Solution{
	
	public static void main(String []argh)
	{
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNext()) {
			String input=sc.next();
            //Complete the code
            System.out.println(stack(input));
		}
		
	}
    
    public static boolean stack(String s) {
        int n = s.length();
        Stack<Character> st = new Stack<>();
        
        for (int i = 0; i < n; ++i) {
            char c = s.charAt(i);
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                if (st.isEmpty()) { return false; }
                char x = st.pop();
                
                if ((c == ')' && x != '(') || (c == '}' && x != '{') || (c == ']' && x != '[')) {
                    return false;
                }
            }
        }
        
        return st.isEmpty();
    }
}


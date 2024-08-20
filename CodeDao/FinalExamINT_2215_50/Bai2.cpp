string deCode(string s) {
	int n = s.length();
    
    int m = 0;
    
    string t = "";
    
    for (int i = 0; i < n; ++i) {
    	if (m != 0) {
    		for (int j = 0; j < m - 1; ++j) {
    			t += s[i];
			}
			m = 0;
		}
    	
    	if (isdigit(s[i])) {
    		m = s[i] - '0';
		} else {
			t += s[i];
		}
	}
	
	return t;
}

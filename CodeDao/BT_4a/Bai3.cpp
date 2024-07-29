struct Complex {
    // your code goes here
    // Cac bien thanh vien
    int a;
    int b;
    // your code goes here
    // Hai ham khoi tao
    Complex() {
        a = 0;
        b = 0;
    }
    
    Complex(int _a, int _b) {
        a = _a;
        b = _b;
    }

    double abs() {
        // your code goes here
        return sqrt(a * a + b * b);
    }
    
    void print() {
        // your code goes here
        if (a == 0 && b == 0) 
            cout << 0;
        else if (a == 0) {
            if (b == 1) {
                cout << 'i';
            } else if (b == -1) {
                cout << "-i";
            } else {
                cout << b << 'i';
            }
        } else {
            cout << a;
            if (b == 1) {
                cout << "+i";
            } else if (b == -1) {
                cout << "-i";
            } else if (b > 0) {
                cout << '+' << b << 'i';
            } else if (b < 0) {
                cout << b << 'i';
            }
        }
        cout << '\n';
    }
};

Complex add(Complex a, Complex b) {
    // your code goes here
    Complex x;
    x.a = a.a + b.a;
    x.b = a.b + b.b;
    return x;
}

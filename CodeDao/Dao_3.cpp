#include <iostream>

using namespace std;

class BigInt
{
    string value;

public:
    // Hàm khởi tạo số nguyên lớn bằng 0
    BigInt();

    // Hàm khởi tạo số nguyên lớn từ một xâu c-string
    BigInt(const char *);

    // Hàm khởi tạo số nguyên lớn từ một số nguyên lớn khác
    BigInt(const BigInt &);

    // Toán tử in ra màn hình
    friend ostream &operator<<(ostream &, const BigInt &);

    // Toán tử cộng
    friend BigInt operator+(const BigInt &, const BigInt &);
};

// Toán tử in ra màn hình
ostream &operator<<(ostream &os, const BigInt &num)
{
    os << num.value;
    return os;
}

// Hàm khởi tạo
BigInt::BigInt()
{
    value = "0";
}

BigInt::BigInt(const char *num)
{
    string s(num);
    value = s;
}

BigInt::BigInt(const BigInt &num)
{
    string s(num.value);
    value = s;
}

// Toán tử cộng
BigInt operator+(const BigInt &num, const BigInt &other)
{
    string first_number = num.value;
    string second_number = other.value;

    while (first_number.size() < second_number.size())
    {
        first_number = "0" + first_number;
    }
    while (second_number.size() < first_number.size())
    {
        second_number = "0" + second_number;
    }

    int n = first_number.size();
    int cong_nho = 0;
    string result = "";

    for (int i = n - 1; i >= 0; i--)
    {
        int sum = first_number[i] - '0' + second_number[i] - '0' + cong_nho;
        cong_nho = sum / 10;
        string r_char = to_string(sum % 10);
        result = r_char + result;
    }
    if (cong_nho > 0)
        result = to_string(cong_nho) + result;

    return BigInt(result.c_str()); // Sua dong nay
}

int main()
{

    // BigInt num1("73");
    // BigInt num2("27");
    // BigInt sum = num1 + num2;
    // cout << sum;

    BigInt num("34123");
    cout << num + BigInt("23") + BigInt("3341");

    // BigInt a = BigInt("7412391231723192399991239");
    // BigInt b = BigInt("21348123");
    // cout << a + b << endl;
    return 0;
}
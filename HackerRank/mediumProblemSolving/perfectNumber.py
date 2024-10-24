def perfectNumber(n):
    s = 0
    for i in range(1, n + 1):
        if n % i == 0:
            s += i 
    return s

def main():
    x = int(input())
    y = int(input())
    
    ans = 0 
    for i in range(x, y + 1):
        temp = perfectNumber(i)
        if temp == i:
            ans += i 
            
    print(ans)
    
if __name__ == '__main__':
    main()
    

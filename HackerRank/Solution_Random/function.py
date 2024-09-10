def is_leap(n):
    leap = False
    
    # Write your logic here
    if n % 400 == 0 or (n % 4 == 0 and n % 100 != 0) :
        leap = True
    return leap

year = int(input())
print(is_leap(year))
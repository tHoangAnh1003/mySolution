a = '47'
Set = set()

def back_track(index, s):
    if len(s) >= 5:
        return
    for i in range(len(a)):
        if s != '':
            Set.add(s)
        back_track(index + 1, s + a[i])


def main():
    back_track(1, '')
    n = int(input())

    flag = True

    lst = []
    for i in Set:
        lst.append(int(i))
    lst.sort()

    for i in lst:
        if n % i == 0:
            print('YES')
            flag = False
            break   
    
    if flag:
        print('NO')


main()


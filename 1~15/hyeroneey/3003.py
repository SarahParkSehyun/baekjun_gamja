input = list(map(int, input().split()))

ori = [1, 1, 2, 2, 2, 8]

for i in range(6):
    print(ori[i]-input[i], end=' ')

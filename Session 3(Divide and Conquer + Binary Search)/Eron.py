import sys
import os
if not os.environ.get("ONLINE_JUDGE"):
    sys.stdin = open('./in.txt', 'r')
    sys.stdout = open('./out.txt', 'w')


def find_index(arr, n):
    left = 0
    right = len(arr)
    while left < right:
        mid = (left+right)//2
        if n < arr[mid]:
            right = mid
        else:
            left = mid+1
    return left


n = int(input())
arr = list(map(int, input().split()))

# print(n,arr)

violations = 0

sorted_arr = [arr[0]]

for i in range(1, n):
    index = find_index(sorted_arr, arr[i])
    if index+1 > len(sorted_arr):
        sorted_arr.append(arr[i])
    else:
        violations += len(sorted_arr) - index
        sorted_arr.insert(index, arr[i])

print(violations)

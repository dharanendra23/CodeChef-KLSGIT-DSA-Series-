import sys
import os
if not os.environ.get("ONLINE_JUDGE"):
    sys.stdin = open('./in.txt', 'r')
    sys.stdout = open('./out.txt', 'w')

def find_index(arr,n):
    left = 0
    right = len(arr)-1

    while left <= right:
        mid = (left+right) // 2
        if arr[mid] <= n:
            left = mid+1
        else:
            right = mid-1
    
    return right+1


T = int(input())
for _ in range(T):
    N = int(input())

    disks = list(map(int,input().split()))

    # print(N,disks)

    disk_stks = []

    for disk in disks:
        if len(disk_stks) == 0:
            disk_stks.append(disk)
        else:
            index = find_index(disk_stks,disk)
            if index == len(disk_stks):
                disk_stks.append(disk)
            else:
                disk_stks[index] = disk

    print(len(disk_stks),*disk_stks)
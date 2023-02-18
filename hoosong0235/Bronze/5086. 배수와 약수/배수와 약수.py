while True:
    nums = list(map(int, input().split()))
    if nums == [0, 0]:
        break
    elif nums[1] % nums[0] == 0:
        print("factor")
    elif nums[0] % nums[1] == 0:
        print("multiple")
    else:
        print("neither")
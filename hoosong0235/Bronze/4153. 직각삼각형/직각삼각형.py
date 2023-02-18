while (True):
    raw = input().split(" ")
    if (raw == ["0", "0", "0"]):
        break
    else:
        for i in range(3):
            raw[i] = int(raw[i])
        raw.sort()
        if (raw[0]**2+raw[1]**2==raw[2]**2):
            print("right")
        else:
            print("wrong")
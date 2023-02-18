hour_minute = input().split(" ")
hour = int(hour_minute[0])
minute = int(hour_minute[1])

if (minute >= 45):
    minute -= 45
else:
    minute = 60 - (45 - minute)
    if (hour != 0):
        hour -= 1
    else:
        hour = 23

print(hour, minute)
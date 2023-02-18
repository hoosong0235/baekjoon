sentence = input().strip()
if not " " in sentence:
    if len(sentence)>=1:
        print(1)
    else:
        print(0)
else:
    print(len(sentence.split(" ")))
def cal(num, index, plus, minus, multiply, divide):
    if index == N:
        answer_list.append(num)
        return
    if plus != 0:
        cal(num + num_list[index], index + 1, plus - 1, minus, multiply, divide)
    if minus != 0:
        cal(num - num_list[index], index + 1, plus, minus - 1, multiply, divide)
    if multiply != 0:
        cal(num * num_list[index], index + 1, plus, minus, multiply - 1, divide)
    if divide != 0:
        if num >= 0 or num % num_list[index] == 0:
            cal(num // num_list[index], index + 1, plus, minus, multiply, divide - 1)
        else:
            cal(num // num_list[index] + 1, index + 1, plus, minus, multiply, divide - 1)


N = int(input())
num_list = list(map(int, input().split()))
operator_list = list(map(int, input().split()))
answer_list = []

cal(num_list[0], 1, operator_list[0], operator_list[1], operator_list[2], operator_list[3])
print(max(answer_list))
print(min(answer_list))
def binary_search(li, target):
    left = 0
    right = len(li) - 1

    while left <= right:
        mid = (left + right) // 2

        if li[mid] == target:
            return 1
        elif li[mid] > target:
            right = mid - 1
        elif li[mid] < target:
            left = mid + 1

    return 0


test_case = int(input())

for _ in range(test_case):
    n = int(input())
    n_li = list(map(int, input().split(' ')))
    m = int(input())
    m_li = list(map(int, input().split(' ')))
    n_li.sort()
    for i in m_li:
        print(binary_search(n_li, i))

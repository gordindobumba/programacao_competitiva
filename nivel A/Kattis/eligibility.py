n = int(input())
for i in range(n):
    name, study, birth, courses = input().split()
    c = int(courses)
    y1, m, d = map(int, study.split('/'))
    y2, m, d = map(int, birth.split('/'))
    if y1 >= 2010 or y2 >= 1991:
        print(f"{name} eligible")
    elif c <= 40:
        print(f"{name} coach petition")
    else:
        print(f"{name} ineligible")
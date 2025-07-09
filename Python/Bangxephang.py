N = int(input()) # sĩ số
Students = []
for _ in range(N):
    S = input().strip() # họ tên
    C, T = map(int,input().split()) # số bài làm đúng
    Students.append({
        "Name": S,
        "Correct": C,
        "Submit": T
    })


def students_sort(students):
    return sorted(Students, key=lambda sv:(-sv["Correct"], sv["Submit"], sv["Name"]))

for sv in students_sort(Students):
    print(sv["Name"],sv["Correct"],sv["Submit"])

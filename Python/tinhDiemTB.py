examiner = int(input())
scores = list(map(float, input().split()))
if len(scores) != examiner:
    exit()

min_score = min(scores)
max_score = max(scores)

filtered_scores = [x for x in scores if x != min_score and x != max_score]

diemTB = sum(filtered_scores)/len(filtered_scores)
print(f"{diemTB:.2f}")


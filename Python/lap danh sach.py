class Team:
    def __init__(self, ma_team, ten_team, ten_truong):
        self.ma_team = ma_team
        self.ten_team = ten_team
        self.ten_truong = ten_truong

class ThiSinh:
    def __init__(self, ma_thisinh, ho_ten, ma_team, ten_team, ten_truong):
        self.ma_thisinh = ma_thisinh
        self.ho_ten = ho_ten
        self.ma_team = ma_team
        self.ten_team = ten_team
        self.ten_truong = ten_truong

# Nhập số lượng team
n = int(input())
teams = {}
for i in range(1, n + 1):
    ten_team = input().strip()
    ten_truong = input().strip()
    ma_team = f"Team{str(i).zfill(2)}"
    teams[ma_team] = Team(ma_team, ten_team, ten_truong)

# Nhập số lượng thí sinh
m = int(input())
thisinhs = []
for i in range(1, m + 1):
    ho_ten = input().strip()
    ma_team = input().strip()
    ma_thisinh = f"C{str(i).zfill(3)}"
    if ma_team in teams:
        thisinhs.append(ThiSinh(ma_thisinh, ho_ten, ma_team, teams[ma_team].ten_team, teams[ma_team].ten_truong))

# Sắp xếp danh sách thí sinh theo thứ tự từ điển của họ tên
thisinhs.sort(key=lambda x: x.ho_ten)

# Xuất kết quả
for ts in thisinhs:
    print(ts.ma_thisinh, ts.ho_ten, ts.ten_team, ts.ten_truong)
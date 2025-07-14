import re
def valid_filename(filename):
    return re.fullmatch(r"[a-zA-Z._]+",filename) is not None

def is_python_file(filename):
    return filename.lower().endswith(".py")

filename = input().strip()
if is_python_file(filename) and valid_filename(filename):
    print("yes")
else:
    print("no")
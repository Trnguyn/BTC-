import sys
import re

# đọc toàn bộ input
text = sys.stdin.read()

#tách câu
sentences = re.split(r'[.!?]',text)

for sentence in sentences:
    sentence = sentence.strip()
    if not sentence:
        continue

    words = sentence.split()
    sentence_clean = ' '.join(words).lower()

    formatted = sentence_clean.capitalize()
    print(formatted)




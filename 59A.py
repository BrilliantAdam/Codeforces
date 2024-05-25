s = input();
small = 0
length = len(s)
for letter in s:
    if ord(letter) >= 97:
        small +=1
if (length - small) <= small:
    s = s.lower()
else:
    s= s.upper()
print(s)

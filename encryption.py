# EasyMoneyDeveloper
import math

def encryption(s):
    word = ""
    s = s.split(' ')
    s = ''.join(s)
    length = len(s)

    if(length == 1):
        print(s)
        return
    thelist = []
    # down is the row
    down = math.floor(math.sqrt(len(s)))
    # up is the column
    up = math.ceil(math.sqrt(len(s)))

    # print("down: " + str(down))
    # print("High: " + str(up))
    if(down*up <= length):
        down = down + 1
    for j in range(0, up, 1):
            for  i in range(j, length + 1, up):
                word = word + s[i]
                if(i + up >= length):
                    break
            thelist.append(word)
            word = ""
    thelist = ' '.join(thelist)
    print(thelist)
s = input()
encryption(s)
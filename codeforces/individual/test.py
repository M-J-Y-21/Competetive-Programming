given = input()

new = ""
while (len(new) <= len(given)):
    if 'A' not in new and 'H' not in new and 'O' not in new and 'W' not in new:
        new += 'A'
    else if 
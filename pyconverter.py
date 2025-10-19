# binary converter but in python
# (i was kinda losing it with C)
# sorry yall...

def converter(str):
    counter = 0
    ascii = 0
    if len(str) == 0:
        print("String is empty")
    else:
        reverse_str = str[::-1]

        for char in reverse_str:
            if char == "1":
                ascii += (2 ** counter)
                counter += 1
            elif char == "0":
                counter += 1
        return ascii
    
# replace the func args with binary strings
print(converter("The 1111 program 1111 ignores 1111 strings 1111 and whitespaces 1111 and only 1111 focuses on 1111 binary 1111 !!!"))
def replace(str, old, new):
    for index in range(len(str)):
        if str[index] == old:
            print("Equal")
            str[index] = new

    print(str)


replace([1,2,3,4,5,1,2,3], 1, 100)
def rearrange_array(l):
    length = len(l)
    print("List before rearrangement: ", l)
    i = 0
    while(i < length):
        ele = l[i]
        if(l[i] != -1 and l[i] != l[ele]):
            l[i], l[ele] = l[ele], l[i]
        else:
            i += 1

    print("List after rearrangement: ", l)

if __name__=="__main__":
    rearrange_array([-1, -1, 6, 1, 9, 3, 2, -1, 4, -1 ]);

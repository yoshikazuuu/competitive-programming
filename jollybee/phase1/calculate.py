# Python3 implementation of the approach

# Function that will find the
# card number which is remaining
def unique(list1):
 
    # initialize a null list
    unique_list = []
 
    # traverse for all elements
    for x in list1:
        # check if exists in unique_list or not
        if x not in unique_list:
            unique_list.append(x)
    # print list
    for x in unique_list:
        print(x)

def remainingCard(n):

    queCards = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]

    while (len(queCards) >= 2):

        for j in range (0, n):
            queCards.append(queCards[0]);
            queCards.pop(0);

        queCards.pop(0);

    return queCards[0]

# Driver code
bruh = []
for i in range (1, 17):
    # print(remainingCard(i), end=" ")
    bruh.append(remainingCard(i))

bruh.sort()
unique(bruh)

# This code is contributed by divyamohan123

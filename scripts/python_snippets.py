# Given a list of strings, the below function finds the strings starting with a given prefix 
# ufList = Unfiltered List
def filter_prefix(ufList, prefix):
    # string method startswith is used for problem
    return [word for word in ufList if word.startswith(prefix)]

# Given a string "MMAAANNNN", the below function returns M2A3N4
# ucString = Uncompressed String
def compress(ucString):
    d = defaultdict(int) # defaultdict ( int ) initializes the value to zero if not defined
    for c in ucString:
        d[c] += 1 # increment the value by 1
    # create an empty string
    # zip iterates through both keys and values , returns tuple
    return "".join([x + str(y) for x, y in zip(d.keys(), d.values())])


def main():
    print "Hello"
    file_name = "LargestProductTest.txt"
    f = open(file_name, 'r')
#    print f.read()
    s = f.readline()
    s = s.strip('\n')
    out = s.split(' ')
    print out
#    print f.readline()
    return

main()

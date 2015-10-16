# Helen Chac
# This program was aimed to 

def main():
    print "Hello"
    file_name = "LargestProductTest.txt"
    f = open(file_name, 'r')

    for line in f:
        # removes the trailing '\n'        
        line = line.strip('\n')
        out = line.split(' ')
        #print f.readline()
        print out

    return

main()

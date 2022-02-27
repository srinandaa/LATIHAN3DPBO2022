class Processor():
    #private members
    __price = 0
    __name = "blank"

    def __init__(self, name = "blank", price = 0):
        self.__price = price
        self.__name = name

    #getter & setter
    def setprice(self, price):
        self.__price = price

    def getprice(self):
        return self.__price
    
    def setname(self, name):
        self.__name = name

    def getname(self):
        return self.__name

    def printProcessor(self):
        print( "Processor   : %s" %(self.__name))

class RAM():
    #private members
    __capacity = 0
    __price = 0

    def __init__(self, capacity = 0, price = 0):
        self.__capacity = capacity
        self.__price = price

    #getter & setter
    def setcapacity(self, capacity):
        self.__capacity = capacity

    def getcapacity(self):
        return self.__capacity
    
    def setprice(self, price):
        self.__price = price

    def getprice(self):
        return self.__price

    def printRAM(self):
        print( "RAM         : %d GB" %(self.__capacity))    

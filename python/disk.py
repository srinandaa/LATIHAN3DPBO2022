class Disk():
    #private members
    __type = "blank"
    __capacity = 0
    __price = 0

    def __init__(self, type = "blank", capacity = 0, price = 0):
        self.__type = type
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

    def settype(self, type):
        self.__type = type

    def gettype(self):
        return self.__type

    def printDisk(self):
        print("Disk        : " + str(self.gettype()) + " " + str(self.getcapacity()) + " GB")  

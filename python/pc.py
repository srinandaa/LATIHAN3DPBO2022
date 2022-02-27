from processor import Processor 
from disk import Disk
from ram import RAM  

class PC():
    #private members
    pObj = Processor()
    dObj = Disk()
    rObj = RAM()
    __totalPrice = 0

    def __init__(self, pObj = Processor(), dObj = Disk(), rObj = RAM()):
        self.pObj = pObj
        self.dObj = dObj
        self.rObj = rObj

    #getter & setter
    def setProcessor(self, pObj):
        self.pObj = pObj

    def getProcessor(self):
        return self.pObj
    
    def setDisk(self, dObj):
        self.dObj = dObj

    def getDisk(self):
        return self.dObj

    def setRAM(self, rObj):
        self.rObj = rObj

    def getRAM(self):
        return self.rObj

    def totalPrice(self):
        return  (self.pObj.getprice() + self.dObj.getprice() + self.rObj.getprice())


    def printPC(self):
        print( "Total Price : Rp %d,-" %(self.totalPrice()))
        self.pObj.printProcessor()
        self.dObj.printDisk()
        self.rObj.printRAM()

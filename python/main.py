from ctypes.wintypes import PCHAR
from processor import Processor 
from disk import Disk
from ram import RAM  
from pc import PC

#hardcode inputan
p1 = Processor()
p1.setname("Intel Core i3")
p1.setprice(2000000)
d1 = Disk()
d1.settype("SSD")
d1.setcapacity(256)
d1.setprice(2500000)
r1 = RAM()
r1.setcapacity(16)
r1.setprice(2000000)
pc1 = PC(p1, d1,r1)

p2 = Processor()
p2.setname("Intel Core i7")
p2.setprice(4500000)
d2 = Disk()
d2.settype("SSD")
d2.setcapacity(512)
d2.setprice(4000000)
r2 = RAM()
r2.setcapacity(16)
r2.setprice(2000000)
pc2 = PC(p2, d2,r2)


#output
print("=============================")
print("       Spesifikasi PC 1")
print("=============================")
pc1.printPC()

print("\n=============================")
print("       Spesifikasi PC 2")
print("=============================")
pc2.printPC()

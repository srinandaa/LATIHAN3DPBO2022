class Main{
    public static void main(String[] args){
        Processor p1 = new Processor();
        p1.setname("Intel Core i3");
        p1.setprice(2000000);
        Disk d1 = new Disk();
        d1.settype("SSD");
        d1.setcapacity(256);
        d1.setprice(2500000);
        RAM r1 = new RAM();
        r1.setcapacity(16);
        r1.setprice(2000000);
        PC pc1 = new PC(p1, d1,r1);

        Processor p2 = new Processor();
        p2.setname("Intel Core i7");
        p2.setprice(4500000);
        Disk d2 = new Disk();
        d2.settype("SSD");
        d2.setcapacity(512);
        d2.setprice(4000000);
        RAM r2 = new RAM();
        r2.setcapacity(16);
        r2.setprice(2000000);
        PC pc2 = new PC(p2, d2,r2);

        System.out.println("=============================");
        System.out.println("       Spesifikasi PC 1");
        System.out.println("=============================");
        pc1.printPC();

        System.out.println("=============================");
        System.out.println("       Spesifikasi PC 2");
        System.out.println("=============================");
        pc2.printPC();
    }
}
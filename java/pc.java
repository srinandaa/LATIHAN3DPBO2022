class PC{
    //atribut
    private Processor pObj;
    private Disk dObj;
    private RAM rObj;
    private int totalPrice;

    //konstruktor
    PC(){}
    public PC(Processor pObj, Disk dObj, RAM rObj){
        this.pObj = pObj;
        this.dObj = dObj;
        this.rObj = rObj;
        this.totalPrice = this.pObj.getprice() + this.dObj.getprice() + this.rObj.getprice();
    }

    //setter & getter
    public void setpObj(Processor pObj){
        this.pObj = pObj;
    }
    public Processor getpObj(){
        return pObj;
    }
        
    public void setdObj(Disk dObj){
        this.dObj = dObj;
    }
    public Disk getdObj(){
        return dObj;
    }

    public void setrObj(RAM rObj){
        this.rObj = rObj;
    }
    public RAM getrObj(){
        return rObj;
    }

    public void settotalPrice(int totalPrice){
        this.totalPrice = totalPrice;
    }
    public int gettotalPrice(){
        return totalPrice;
    }

    void printPC(){
        System.out.println("Total Price : Rp " + this.totalPrice + ",-");
        this.pObj.printProcessor(); 
        this.dObj.printDisk(); 
        this.rObj.printRAM();
    }
}
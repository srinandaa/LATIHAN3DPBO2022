class RAM{
    //atribut
    private int capacity;
    private int price;
     
    //konstruktor 
    RAM(){}

    //setter & getter capacity
    public void setcapacity(int capacity){
        this.capacity = capacity;
    }
    public int getcapacity(){
        return capacity;
    }

    //setter & getter price
    public void setprice(int price){
        this.price = price;
    }
    public int getprice(){
        return price;
    }

    void printRAM(){
        System.out.println("RAM         : " + this.capacity + " GB");
    }
}
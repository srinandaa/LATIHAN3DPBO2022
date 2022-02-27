class Disk{
    //atribut
    private String type;
    private int capacity;
    private int price;
     
    //konstruktor 
    Disk(){}

    //setter & getter type
    public void settype(String type){
        this.type = type;
    }
    public String gettype(){
        return type;
    }

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

    void printDisk(){
        System.out.println("Disk        : " + this.type + " " + this.capacity + " GB");
    }
}
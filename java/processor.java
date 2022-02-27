class Processor{
    //atribut
    private String name;
    private int price;
     
    //konstruktor 
    Processor(){}

    //setter & getter name
    public void setname(String name){
        this.name = name;
    }
    public String getname(){
        return name;
    }

    //setter & getter price
    public void setprice(int price){
        this.price = price;
    }
    public int getprice(){
        return price;
    }

    void printProcessor(){
        System.out.println("Processor   : " + this.name);
    }
}
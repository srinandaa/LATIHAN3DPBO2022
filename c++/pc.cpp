class PC{
    private:
        //atribut
        int totalPrice;
        Processor pObj;
        Disk dObj;
        RAM rObj;
    
    public:
        //konstruktor
        PC(){}
        PC(Processor pObj, Disk dObj, RAM rObj){
            this->pObj = pObj;
            this->dObj = dObj;
            this->rObj = rObj;
            this->totalPrice = this->pObj.getPrice() + this->dObj.getPrice() + this->rObj.getPrice();
        }

        //setter & getter
        void setpObj(Processor pObj){
            this->pObj = pObj;
        }
        Processor getpObj(){
            return this->pObj;
        }
        
        void setdObj(Disk dObj){
            this->dObj = dObj;
        }
        Disk getdObj(){
            return this->dObj;
        }

        void setrObj(RAM rObj){
            this->rObj = rObj;
        }
        RAM getrObj(){
            return this->rObj;
        }

        void setTotalPrice(int totalPrice){
            this->totalPrice = totalPrice;
        }
        int getTotalPrice(){
            return this->totalPrice;
        }

        //method
        void printPC(){
            cout << "Total Price : Rp " << this->totalPrice << ",-" << endl;
            this->pObj.printProcessor(); 
            this->dObj.printDisk(); 
            this->rObj.printRAM();
        }

        //destruktor
        ~PC(){
        }
};

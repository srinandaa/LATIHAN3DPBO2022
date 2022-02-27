class RAM{
    private:
        //atribut
        int capacity, price;

    public:
        //konstruktor
        RAM(){}
        RAM(int c, int p){
            this->capacity = c;
            this->price = p;
        }

        //setter & getter
        void setCapacity(int capacity){
            this->capacity = capacity;
        }
        int getCapacity(){
            return this->capacity;
        }

        void setPrice(int price){
            this->price = price;
        }
        int getPrice(){
            return this->price;
        }

        void printRAM(){
            cout << "RAM         : " << this->capacity << " GB" << endl;
        }

        //destruktor
        ~RAM(){
        }

};

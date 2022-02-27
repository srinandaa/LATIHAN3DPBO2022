class Processor{
    private:
        //atribut
        string name;
        int price;

    public:
        //konstruktor
        Processor(){}
        Processor(string n, int p){
            this->name = n;
            this->price = p;
        }

        //setter & getter
        void setName(string n){
            this->name = n;
        }
        string getName(){
            return this->name;
        }

        void setPrice(int p){
            this->price = p;
        }
        int getPrice(){
            return this->price;
        }

        void printProcessor(){
            cout << "Processor   : " << this->name << endl;
        }

        //destruktor
        ~Processor(){
        }
};

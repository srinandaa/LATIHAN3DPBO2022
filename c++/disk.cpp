class Disk{
    private:
        //atribut
        string type;
        int capacity, price;

    public:
        //konstruktor
        Disk(){}  
        Disk(string t, int c, int p){
            this->type = t;
            this->capacity = c;
            this->price = p;
        }

        //setter & getter
        void setType(string t){
            this->type = t;
        }
        string getType(){
            return this->type;
        }

        void setCapacity(int c){
            this->capacity = c;
        }
        int getCapacity(){
            return this->capacity;
        }

        void setPrice(int p){
            this->price = p;
        }
        int getPrice(){
            return this->price;
        }

        void printDisk(){
            cout << "Disk        : " << this->type << " " << this->capacity << " GB" << endl;
        }

        //destruktor
        ~Disk(){
        }
};

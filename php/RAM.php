<?php
   
    class RAM{
        //atribut
        private $capacity = 0;
        private $price = 0;

        //konstruktor
        function __construct($capacity = 0, $price = 0){
            $this->capacity = $capacity;
            $this->price = $price;
        }

        //setter & getter
        function setcapacity($capacity){
            $this->capacity = $capacity;
        }
        function getcapacity(){
            return $this->capacity;
        }

        function setprice($price){
            $this->price = $price;
        }
        function getprice(){
            return $this->price;
        }

        function printRAM(){
            echo "RAM         : ".$this->getcapacity(). " GB". "<br/>";
        }

        function __destruct(){  
        }
    } 
?>
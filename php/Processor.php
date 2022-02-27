<?php
   
    class Processor{
        //aatribut
        private $name = "";
        private $price = 0;

        //konsruktor
        function __construct($name = "", $price = 0){
            $this->name = $name;
            $this->price = $price;
        }

        //setter & getter
        function setname($name){
            $this->name = $name;
        }
        function getname(){
            return $this->name;
        }

        function setprice($price){
            $this->price = $price;
        }
        function getprice(){
            return $this->price;
        }

        function printProcessor(){
            echo "Processor   : ".$this->getname()."<br/>";
        }

        //destruktor
        function __destruct(){  
        }
    } 
?>
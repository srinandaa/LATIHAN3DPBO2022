<?php
   
    class Disk{
        //atribut
        private $type = "";
        private $capacity = 0;
        private $price = 0;

        function __construct($type = 0, $capacity = 0, $price = 0){
            $this->type = $type;
            $this->capacity = $capacity;
            $this->price = $price;
        }

        //setter & getter
        function settype($type){
            $this->type = $type;
        }
        function gettype(){
            return $this->type;
        }

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

        function printDisk(){
            echo "Disk        : ".$this->gettype(). " ".$this->getcapacity(). " GB"."<br/>";
        }
        //destruktor
        function __destruct(){  
        }
    } 
?>
<?php
include "Processor.php";
include "Disk.php";
include "RAM.php";

    class PC{
        //atribut
        private $totalPrice = 0;

        function __construct($Processor, $Disk, $RAM){
            $this->Processor = $Processor;
            $this->Disk = $Disk;
            $this->RAM = $RAM;
        }

        //setter & getter
        function setProcessor($Processor){
            $this->Processor = $Processor;
        }
        function getProcessor(){
            return $this->Processor;
        }

        function setDisk($Disk){
            $this->Disk = $Disk;
        }
        function getDisk(){
            return $this->Disk;
        }

        function setRAM($RAM){
            $this->RAM = $RAM;
        }
        function getRAM(){
            return $this->RAM;
        }

        function totalPrice(){
            $totalPrice = $this->Processor->getprice() +  $this->Disk->getprice() +  $this->RAM->getprice();
            return $totalPrice;
        }

        function printPC(){
            echo "Total Price : ".$this->totalPrice(). ",-"."<br/>";
            $this->Processor->printProcessor();
            $this->Disk->PrintDisk();
            $this->RAM->PrintRAM();
        }
        //destruktor
        function __destruct(){  
        }
    } 
?>
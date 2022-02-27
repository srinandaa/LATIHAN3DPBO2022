<?php
include "PC.php";

    $p1 = new Processor("Intel Core i3", 2000000);
    $d1 = new Disk("SSD", 256, 2500000);
    $r1 = new RAM(16, 2000000);
    $pc1 = new PC($p1, $d1, $r1);

    $p2 = new Processor("Intel Core i7", 4500000);
    $d2 = new Disk("SSD", 512, 4000000);
    $r2 = new RAM(16, 2000000);
    $pc2 = new PC($p2, $d2, $r2);

    //output
    echo "=============================" . "<br/>";
    echo "       Spesifikasi PC 1" . "<br/>";
    echo "=============================" . "<br/>";
    $pc1->printPC();

    echo "<br/>";
    echo "=============================" . "<br/>";
    echo "       Spesifikasi PC 2" . "<br/>";
    echo "=============================" . "<br/>";
    $pc2->printPC();
?>
<?php

//https://www.google.com/maps/dir/Current+Location/6801+McPherson+Road+Laredo+TX+78041
$args = array(
  "attributes" => array(
    "class" => $link_classes,
    "data-gtm" => "event:".$gtm_event.",label:Directions,hospitalName:".$facility,
    "target" => "_blank",
  )
);

print l('Directions', '//www.google.com/maps/dir/Current+Location/'.$address, $args);

?>
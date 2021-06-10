<?php
$attributes = array(
  "class" => $link_classes,
  "target" => $target,
  "data-gtm" => "event:".$gtm_event.",label:".$title.",hospitalName:".$facility,
);
print l($title, $url, array("html" => $html, "attributes" => $attributes));

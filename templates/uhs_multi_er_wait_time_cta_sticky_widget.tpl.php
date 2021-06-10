<?php
if (!is_array($attributes)) {
  $attributes = array("class" => array("gtm-link"),"data-gtm" => "event:modalClick,label:".$title.",hospitalName:".$facility);
}
$args = array("fragment"=>$anchor,"attributes"=>$attributes);
print l($title, $url, $args);

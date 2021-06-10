<?php
//Location Page (use appendix A)
//Services Page (use appendix A)
//key_doc_id or key_prac_id
//key level = 2 or 3
$string = "key_doc_id/".$er_code."/key_level/3/key_map/0/hide_header/1/hide_footer/1/hide_insurance/1/hide_location/1/hide_profile_infoset/0/hide_info_mssg/0/hide_profile/1/hide_partner_alert/1/hide_other_provider/1/key_type/POPUP/hide_phone/1/hide_profile_pic/1/hide_star_rating/1/key_partner_code/UHS/key_mobile_inline_button/1/hide_visitreason_other_providers/0/iframeWidth/800/iframeHeight/500";

//Provider List Page Implementation(use appendix B) (diff -key_prac_id + key_doc_id)
//Desktop Solution North River: Implementation
//Desktop Solution St. Mary’s : Implementation
//$string = "key_doc_id/".$id."/key_level/3/key_map/0/hide_header/1/hide_footer/1/hide_insurance/1/hide_location/1/hide_profile_infoset/0/hide_info_mssg/0/hide_profile/1/hide_partner_alert/1/hide_other_provider/1/key_type/POPUP/hide_phone/1/hide_profile_pic/1/hide_star_rating/1/key_partner_code/UHS/key_mobile_inline_button/1/hide_visitreason_other_providers/0/iframeWidth/800/iframeHeight/500'";


$code = "show_docasap_cobranding_iframe(document,'".$string."')";
$button = '<a href="javascript:void(0);" data-gtm="event:'.$gtm_event.',label:ER Reserve,hospitalName:'.$facility.'" onClick="'.$code.'" class="btn--primary find-doc gtm-link">Book Appointment</a>';

print $button;
?>
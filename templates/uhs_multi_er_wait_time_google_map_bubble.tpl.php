<div class="gmap-popup-address">
  <?php print $title; ?>
  <div class="location vcard" itemscope="" itemtype="http://schema.org/PostalAddress">
    <div class="adr">
      <div class="street-address">
        <span itemprop="streetAddress"><?php print $street_address; ?></span>
      </div>
      <span class="locality" itemprop="addressLocality">
        <?php print $city; ?>,       </span>
      <span class="region" itemprop="addressRegion"><?php print $state; ?></span>
      <span class="postal-code" itemprop="postalCode"><?php print $postal_code; ?></span>
      <div class="tel">
        <!--<abbr class="type" title="voice">Phone:</abbr>-->
        <span class="value" itemprop="telephone"> <?php print $phone; ?></span>
      </div>
    </div>
  </div>
</div>

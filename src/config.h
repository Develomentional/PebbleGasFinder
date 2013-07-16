#ifndef CONFIG_H
#define CONFIG_H
	
/*
** INSTRUCTIONS **
1. Import this project from Github using Cloud Pebble.
2. Define Starbucks username and password below (replace username & password, leaving quotes).
3. For the barcode to work:
   a) Screenshot your barcode from your phone and crop/resize to 140x63.
   b) Define new resource in Cloud Pebble -- upload your barcode.
   c) Use Resource Identifier as SBUXBARCODE
4. Compile watchface and load through Pebble app.

*/

#define GASURL "http://mattdonders.com/shiftedit/php/gasfeed/gasfeed.php"

#define REQ_DIST "distance"
#define DIST_GAS_COOKIE 135798462

#define REQ_PRICE "price"
#define PRICE_GAS_COOKIE 246879531
	
#endif
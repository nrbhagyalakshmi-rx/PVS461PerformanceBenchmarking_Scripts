Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Login", 
		LAST);

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36");

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t230.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"000e9c45fd27651dad5b2fd0150876443396bdf0");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(NULL);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=79", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t231.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t232.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t233.inf", 
		LAST);

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZvBF5tm-9p3sjLeeNQA4kIy3OQUx6JBQ=", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t234.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t235.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t236.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* 01_OpenApplication */

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Accept");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g9mGPyqpIWImCgYIARAAGBASNwF-L9IrCvnq5gSVQOlDpC26qC8poSRgBCHKwfjWg5N0Tl7ktao9oudoeHuGutdi8MysYUKMcQY&scope=https://www.googleapis.com/auth/firebase.messaging", 
		LAST);

	web_custom_request("CHES4QEStwFBUEE5MWJGVmNFemtkQlRjaU1GSUtpT01oY0lUa2RpVFRuTkpiSFdzcXE2MFdFU1ItRTgxcjc5VjVWNU9sQ2kzTVY1aEQ2Umk5S0NLdDR6Y0FRNTlSMXJ3Z2U0Y2J3OHdJaWZHOTJTekVPX20xdkkxMGFBWkFQazE3MnFDclZCOEtDSEFkd25oTEZjV3U0d0xmN0k1THZsemtiSXpsMF9qM2lFMWhKdlVCSm8wTDZaX28weFBlZVEa", 
		"URL=https://clients4.google.com/invalidation/android/request/CHES4QEStwFBUEE5MWJGVmNFemtkQlRjaU1GSUtpT01oY0lUa2RpVFRuTkpiSFdzcXE2MFdFU1ItRTgxcjc5VjVWNU9sQ2kzTVY1aEQ2Umk5S0NLdDR6Y0FRNTlSMXJ3Z2U0Y2J3OHdJaWZHOTJTekVPX20xdkkxMGFBWkFQazE3MnFDclZCOEtDSEFkd25oTEZjV3U0d0xmN0k1THZsemtiSXpsMF9qM2lFMWhKdlVCSm8wTDZaX28weFBlZVEaACoCCAAyH2NvbS5nb29nbGUuY2hyb21lLmludmFsaWRhdGlvbnM", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t238.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuffer", 
		"BodyBinary=\nY\n\\x06\n\\x04\\x08\\x03\\x10\\x02\\x12%\n\\x06\n\\x04\\x08\\x03\\x10\\x01\\x12\\x12\tr\\xEA\\xA5F\t\\x8B\\xC7\\xBB\\x11\\xEDD\\x05\\xA5M\\xF2\\xF0\\xB5\\x1A\\x07\\x08\\x86\\x18\\x10\\x03\\x18\\x01\\x1A\\x18\\x08\\x00\\x12\\x14\\xDA9\\xA3\\xEE^kK\r2U\\xBF\\xEF\\x95`\\x18\\x90\\xAF\\xD8\\x07\t \\xEA\\x91\\xF1\\xAA\\xF4\\x80\\x03(\\x002\\x0118\\x9F\\x082\\x95\\x01\n\\x90\\x01\n\\x07\\x08\\x03\\x10\\xAC\\xA1\\xCD\t\\x12sMozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML"
		", like Gecko) Chrome/79.0.3945.130 Safari/537.36\\x1A\\x03C++\"\\x0Bchrome-sync \\x01", 
		LAST);

	lr_start_transaction("02_Login");

	web_add_cookie("dtPC=3$494386911_5h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896205124|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1580894416768%7C494386911_5%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1580894395118%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_reg_find("Text=Dashboard", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=409fb4a7-2f3b-45a3-b05e-be98fcd7bab0", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=3$494419012_769h1vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896219020|1580894386919; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t240.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t241.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(NULL);

	web_url("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZR7yBQeyLwDEjLe_YgOYkIy1_PJqbJCMtkcnz6SQjLbnQilEkIy3RZ88eJCMt0miFOSQjLRv2j6AkIy3wFhzoJCMtOE-ZNiQU", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t243.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t244.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t245.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1580894420936", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t246.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1580894420937", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t247.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t248.inf", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1580894420940", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t249.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t250.inf", 
		LAST);

	web_url("7052", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894420941", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"409fb4a7-2f3b-45a3-b05e-be98fcd7bab0");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t252.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1580894420934", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t253.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1580894420935", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t254.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t255.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896229118|1580894386919; DOMAIN=10.100.22.24");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t256.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/590/qksl_ywy/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1580894420943", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t258.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1580894420944", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t259.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1580894420938", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t260.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1580894420939", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t261.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1580894420942", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t262.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("dtPC=3$494419012_769h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896234891|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894420945", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("02_Login",LR_AUTO);

	lr_think_time(3);

	web_url("7052_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894420946", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("03_TriggeredAlertsEVDASReview");

	web_add_cookie("dtSa=true%7CC%7C-1%7CEVDAS%20Review%7C-%7C1580894488726%7C494419012_769%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1580894432870%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"409fb4a7-2f3b-45a3-b05e-be98fcd7bab0");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=EVDAS Review", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("review", 
		"URL=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$494490549_383h1vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=7; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896290558|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities", 
		"URL=http://10.100.22.24:8181/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL=http://10.100.22.24:8181/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("listConfig", 
		"URL=http://10.100.22.24:8181/signal/evdasAlert/listConfig?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=description&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=productSelection&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=caseCount&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=newCases&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedCaseCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=priority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=10&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D="
		"8&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894490631", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/494/hb99bcke/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894490632", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("03_TriggeredAlertsEVDASReview",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580896295744|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$494490549_383h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_url("7052_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894490633", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t273.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896299834|1580894386919; DOMAIN=10.100.22.24");

	web_url("7052_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894490634", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t274.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("04_TriggeredAlertsAdhocReview");

	web_add_cookie("dtSa=true%7CC%7C-1%7CAd-Hoc%20Review%7C-%7C1580894512630%7C494490549_383%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FevdasAlert%2Freview%7CEVDAS%20Review%7C1580894495742%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Adhoc Alert", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$494514842_632h1vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=3; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896314852|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6210&_=1580894514918", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"409fb4a7-2f3b-45a3-b05e-be98fcd7bab0");

	web_custom_request("list", 
		"URL=http://10.100.22.24:8181/signal/adHocAlert/list?callingScreen=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_add_cookie("rxvt=1580896316468|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$494514842_632h2vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894514919", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t279.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896316502|1580894386919; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/527/7la6hbuf/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	lr_end_transaction("04_TriggeredAlertsAdhocReview",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894514920", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("dtPC=3$494514842_632h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896323314|1580894386919; DOMAIN=10.100.22.24");

	web_url("7052_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894514921", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("05_TriggeredAlertsLiteratureReview");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLiterature%20Review%7C-%7C1580894540219%7C494514842_632%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FadHocAlert%2Findex%7CAdhoc%20Alert%7C1580894519227%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Literature Review", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$494542166_22h1vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=4; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896342177|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("viewColumnInfo_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6212&_=1580894542241", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896343412|1580894386919; DOMAIN=10.100.22.24");

	web_url("info_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542243", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=3", 
		"URI=ws://10.100.22.24:8181/signal/stomp/529/phjpjdva/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB3", 
		"OnMessageCB=OnMessageCB3", 
		"OnErrorCB=OnErrorCB3", 
		"OnCloseCB=OnCloseCB3", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("literatureSearchAlertList", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=1&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B13%5D%5Bdata%5D=productName&"
		"columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D"
		"=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542242", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("priority.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t289.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("action_drop_down.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t290.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t291.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("dtPC=3$494542166_22h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896353703|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542244", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("05_TriggeredAlertsLiteratureReview",LR_AUTO);

	lr_think_time(3);

	web_url("7052_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542245", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("06_FilterOnArticleId");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzkuMC4zOTQ1LjEzMBopCAUQARobCg0IBRAGGAEiAzAwMTABEPn_BxoCGAgclKUpIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDV_gYaAhgIieS57SIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQvIAHGgIYCBBFFDYiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEMHqBhoCGAg-XfZIIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYCEqjxu8iBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJoZGgIYCCGbbzciBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgI1dRV4iIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ3iAaAhgIxTTUHyIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAh2x7GvIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAZGgIYCANKKcIiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEPQHGgIYCHNTbHkiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEMNnGgIYCMxb2gQiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEPuFAxoCGAjsKtGsIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCtARoCGAg9TWLhIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t294.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("literatureSearchAlertList_2", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=2&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=30&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D="
		"true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D="
		"&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B13%5D%5Bdata%5D=productName&"
		"columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D"
		"=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542246", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureSearchAlertList_3", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=3&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=3097&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D="
		"true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D="
		"&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B13%5D%5Bdata%5D=productName&"
		"columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D"
		"=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542247", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureSearchAlertList_4", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=4&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=309755&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B13%5D%5Bdata%5D=productName&columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&"
		"columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542248", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureSearchAlertList_5", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=5&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=30975572&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B13%5D%5Bdata%5D=productName&columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&"
		"columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542249", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("06_FilterOnArticleId",LR_AUTO);

	lr_think_time(3);

	web_url("7052_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542251", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("07_RemoveFilter");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("literatureSearchAlertList_6", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=6&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B13%5D%5Bdata%5D=productName&"
		"columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D"
		"=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542252", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("07_RemoveFilter",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542253", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542254", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("08_SortOnAuthor");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("literatureSearchAlertList_7", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/literatureSearchAlertList?draw=7&columns%5B0%5D%5Bdata%5D=selected&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=dropdown&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=actions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"articleId&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=alertTags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=title&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=authors&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=publicationDate&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=signal&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=currentDisposition&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=true&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=assignedTo&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=true&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B13%5D%5Bdata%5D=productName&"
		"columns%5B13%5D%5Bname%5D=&columns%5B13%5D%5Bsearchable%5D=true&columns%5B13%5D%5Borderable%5D=true&columns%5B13%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B13%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B14%5D%5Bdata%5D=eventName&columns%5B14%5D%5Bname%5D=&columns%5B14%5D%5Bsearchable%5D=true&columns%5B14%5D%5Borderable%5D=true&columns%5B14%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B14%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B15%5D%5Bdata%5D=disposition&columns%5B15%5D%5Bname%5D=&columns%5B15%5D%5Bsearchable%5D"
		"=true&columns%5B15%5D%5Borderable%5D=true&columns%5B15%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B15%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=8&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1580894542255", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542256", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t305.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("08_SortOnAuthor",LR_AUTO);

	lr_think_time(3);

	web_url("7052_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542257", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("09_CheckAbstractView");

	web_url("literature_details_child_view.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/literature_details_child_view.hbs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542258", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("09_CheckAbstractView",LR_AUTO);

	lr_think_time(3);

	web_url("7052_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894542259", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("11_AlertConfiguration-View Alerts");

	web_add_cookie("dtSa=true%7CC%7C-1%7CView%20Alerts%7C-%7C1580894682720%7C494542166_22%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FliteratureAlert%2Fdetails%7CLiterature%20Review%7C1580894547621%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=PV Signal - Alert Library", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/configuration/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/details", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=3", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$494683718_444h1vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580896483728|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t311.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896484404|1580894386919; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894683795", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=4", 
		"URI=ws://10.100.22.24:8181/signal/stomp/072/ub1qi2fx/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB4", 
		"OnMessageCB=OnMessageCB4", 
		"OnErrorCB=OnErrorCB4", 
		"OnCloseCB=OnCloseCB4", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("configurations", 
		"URL=http://10.100.22.24:8181/signal/api/configurations?_=1580894683796", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t315.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("alert_config_edit_button.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/alert_config_edit_button.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t316.inf", 
		LAST);

	web_add_cookie("rxvt=1580896488537|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$494683718_444h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894683797", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t317.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("11_AlertConfiguration-View Alerts",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580896492621|1580894386919; DOMAIN=10.100.22.24");

	web_url("7052_23", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894683798", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("12_AlertConfiguration-View Execution Status");

	web_add_cookie("dtSa=true%7CC%7C-1%7CView%20Execution%20Status%7C-%7C1580894710440%7C494683718_444%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Fconfiguration%2Findex%7CPV%20Signal%20-%20Alert%20Library%7C1580894688536%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=PV Signal - Execution Status", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("executionStatus", 
		"URL=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=4", 
		"Code=1000", 
		LAST);

	web_add_cookie("rxvt=1580896512071|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$494711426_385h2vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("executionStatus_2", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=SINGLE_CASE_ALERT&_=1580894711506", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t320.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896512105|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$494711426_385h1vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580896511437|1580894386919; DOMAIN=10.100.22.24");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_24", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894711505", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t322.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=5", 
		"URI=ws://10.100.22.24:8181/signal/stomp/310/n8jbpnnl/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB5", 
		"OnMessageCB=OnMessageCB5", 
		"OnErrorCB=OnErrorCB5", 
		"OnCloseCB=OnCloseCB5", 
		LAST);

	web_add_cookie("rxvt=1580896514609|1580894386919; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$494711426_385h-vDAIJAKAJPPOJIHMMOATDNPFQHVBDULMA; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_25", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894711507", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("12_AlertConfiguration-View Execution Status",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580896518663|1580894386919; DOMAIN=10.100.22.24");

	web_url("7052_26", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894711508", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t325.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("13_AlertConfiguration-View Execution Status Completed");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("executionStatus_3", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=2&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=COMPLETED&alertType=SINGLE_CASE_ALERT&_=1580894711509", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("13_AlertConfiguration-View Execution Status Completed",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("7052_27", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894711510", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,gcmjkmgdlgnkkcocmoeiminaijmmjnii,khaoiebndkojlmppeemjhbpbandiljpe,aemomkdncapdnfajjbbcbdebjljbpmpj,hnimpnehoodheedghdeeijklkeaacbdc,ehgidpndbllacpjalkiimkbadgjfnnmc,gkmgaooipdjhmangpemjhigmamcehddo,giekcmmlnklenlaomppkphknjmnnpneh,bklopemakmnopmghhmccadeonafabnal,jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-79.0.3945.130");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:2221615445&cup2hreq=263d9613a433268b65478761cbac1cbdded38043fd1c80478cfffb7909f5db9c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t328.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{eb757d05-5754-41bc-accc-3d8c8a883cb1}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"CHBD\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.4b78391059704408ee3f5c7dcc13ab02384be6f62656c1b727d267faa1317713\"}]},\"ping\":{\"ping_freshness\":\"{52ecdfd8-e823-4b5f-bae7-93b754d4c385}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"32.0.0.321\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{89bfadbe-ca96-497f-a982-f1fdea976607}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\""
		"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{7ef39b54-6b86-431f-924b-dd46112e72b0}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBD\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3bf2d3b81ffffe8ccf9bd01cffa699d1a592aa060f68d424951a6fb4aa9c4b11\"}]},\"ping\":{\"ping_freshness\":\"{34fdc25c-6462-4650-8b83-374771f9ac50}\",\"rd\":4782},"
		"\"updatecheck\":{},\"version\":\"5677\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBD\",\"cohort\":\"1:bm1:uir@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.64c0ff22c119d7881f617de7f2fc4111b6fbd86410d455c0b7e9bb5975918b7b\"}]},\"ping\":{\"ping_freshness\":\"{720dcf38-cb98-4205-9c67-f598042794bf}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"9.9.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\""
		"brand\":\"CHBD\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{03d7ac1c-1122-455e-ae99-9f1d063dea51}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a49ea3bf-1c23-41f9-8516-d204e14a4b2d}\",\"rd\""
		":4782},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBD\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{f779b67b-d10c-4900-a5a8-b1f9f2487f35}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBD\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{7ff1816c-91b6-4762-9c24-cf32561e99ab}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBD\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.f298eb5adfbd0b201a6afd399da93bb3f1516e7c13f046fb94b221e9120081ee\"}]},\"ping\":{\"ping_freshness\":\"{347887b9-948a-4591-bcfc-6898e2acfea7}\",\"rd\":4782},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"79.228.200\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBD\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\""
		"ping_freshness\":\"{bde178f8-2068-4c1a-bc61-958e9e36a0ab}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"CHBD\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.bca9d2c2a453524714c034c874bf787c2f5c68b8d5c6233a18ba8e14c402091d\"}]},\"ping\":{\"ping_freshness\":\"{c7327870-aa7c-493b-82ab-166c28c30241}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"2\"},{\""
		"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBD\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.745cd87cb4ac32d099a7c4bfd52f6eedaeef42a387051590de46a1ad1d1437d4\"}]},\"ping\":{\"ping_freshness\":\"{f4214641-fe64-4401-a913-7632376d8327}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"69\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\""
		":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{bb3346c5-d647-40bf-923b-7a62c2adf095}\",\"sessionid\":\"{5db8f1cb-64a9-4090-99df-41b531b208f7}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t329.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":4044,\"downloaded\":4461,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"5678\",\"previousversion\":\"5677\",\"total\":4461,\"url\":\"http://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/5678/5677/88f170dfbdc8028e5d506c70e9fe85c76c832b801ba8fa03397ee99ddb11abc2.crxd\"},"
		"{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.42d59b40d1075e83e4ce8bb8bfbb81840bb6687dab8d18b979afb71f79c771dd\",\"nextversion\":\"5678\",\"previousfp\":\"1.3bf2d3b81ffffe8ccf9bd01cffa699d1a592aa060f68d424951a6fb4aa9c4b11\",\"previousversion\":\"5677\"}],\"version\":\"5678\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\""
		"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{7a93080f-1044-4bc9-888d-84cb6ae32938}\",\"sessionid\":\"{5db8f1cb-64a9-4090-99df-41b531b208f7}\",\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_28", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580894711511", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t330.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("11_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1580894755073%7C494711426_385%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Fconfiguration%2FexecutionStatus%7CPV%20Signal%20-%20Execution%20Status%7C1580894714608%7C%7C; DOMAIN=10.100.22.24");

	web_reg_find("Text=Login", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_3", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t331.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=5", 
		"Code=1000", 
		LAST);

	lr_end_transaction("11_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
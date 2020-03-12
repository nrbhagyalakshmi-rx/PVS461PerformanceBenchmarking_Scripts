Action()
{

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
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"000e9c45fd27651dad5b2fd0150876443396bdf0");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=79", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t232.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(NULL);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t233.inf", 
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

	web_revert_auto_header("Accept");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("User-Agent", 
		"Chrome WIN 79.0.3945.130 (e22de67c28798d98833a7137c0e22876237fc40a-refs/branch-heads/3945@{#1047}) channel(stable)");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=uP62elmVOZBGPDV0AAoXVQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t237.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x14bhagya.n.r@gmail.com\\x104\\x18\\x02*8\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122!\\x08\\x81\\xF5\\x02\\x12\\x1B \\x00H\\x8D\\xE9\\xAE\\x9E\\x81.p\\x8D\\xE9\\xAE\\x9E\\x81.\\x88\\x01\\xBB\\xDC\\x88\\xC6\\x95\\x93\\xA0\\xB4\\x01@\\x00H\\x07\\xC0>\\x01:%z00000147-73aa-5583-0000-000053d3e1e0R\\x16\n\\x02\\x08\n\n\\x02\\x08\t\n\\x02\\x08\\x07\n\\x02\\x08\\x05\\x10\\x01\\x18\\x00 \\x00Z\\x80\\x01\n~\\x12|Chrome WIN 79.0.3945.130 "
		"(e22de67c28798d98833a7137c0e22876237fc40a-refs/branch-heads/3945@{#1047}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00r\\x0BeiUQOjMnYqA", 
		LAST);

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZvBF5tm-9p3sjLeeNQA4kIy3OQUx6JBQ=", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t238.inf", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36");

	web_custom_request("CHES4QEStwFBUEE5MWJGVmNFemtkQlRjaU1GSUtpT01oY0lUa2RpVFRuTkpiSFdzcXE2MFdFU1ItRTgxcjc5VjVWNU9sQ2kzTVY1aEQ2Umk5S0NLdDR6Y0FRNTlSMXJ3Z2U0Y2J3OHdJaWZHOTJTekVPX20xdkkxMGFBWkFQazE3MnFDclZCOEtDSEFkd25oTEZjV3U0d0xmN0k1THZsemtiSXpsMF9qM2lFMWhKdlVCSm8wTDZaX28weFBlZVEa", 
		"URL=https://clients4.google.com/invalidation/android/request/CHES4QEStwFBUEE5MWJGVmNFemtkQlRjaU1GSUtpT01oY0lUa2RpVFRuTkpiSFdzcXE2MFdFU1ItRTgxcjc5VjVWNU9sQ2kzTVY1aEQ2Umk5S0NLdDR6Y0FRNTlSMXJ3Z2U0Y2J3OHdJaWZHOTJTekVPX20xdkkxMGFBWkFQazE3MnFDclZCOEtDSEFkd25oTEZjV3U0d0xmN0k1THZsemtiSXpsMF9qM2lFMWhKdlVCSm8wTDZaX28weFBlZVEaACoCCAAyH2NvbS5nb29nbGUuY2hyb21lLmludmFsaWRhdGlvbnM", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuffer", 
		"BodyBinary=\nY\n\\x06\n\\x04\\x08\\x03\\x10\\x02\\x12%\n\\x06\n\\x04\\x08\\x03\\x10\\x01\\x12\\x12\tr\\xEA\\xA5F\t\\x8B\\xC7\\xBB\\x11\\xEDD\\x05\\xA5M\\xF2\\xF0\\xB5\\x1A\\x07\\x08\\x86\\x18\\x10\\x03\\x18\\x01\\x1A\\x18\\x08\\x00\\x12\\x14\\xDA9\\xA3\\xEE^kK\r2U\\xBF\\xEF\\x95`\\x18\\x90\\xAF\\xD8\\x07\t \\x88\\xBF\\x93\\xA5\\xF4\\x80\\x03(\\x002\\x0118\\x9F\\x082\\x95\\x01\n\\x90\\x01\n\\x07\\x08\\x03\\x10\\xAC\\xA1\\xCD\t\\x12sMozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML"
		", like Gecko) Chrome/79.0.3945.130 Safari/537.36\\x1A\\x03C++\"\\x0Bchrome-sync \\x01", 
		LAST);

	/* QuantitativeAlert_01_OpenApplication */

	lr_start_transaction("QuantitativeAlert_02_Login");

	web_add_cookie("dtPC=1$482378456_901h-vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=3; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580884195688|1580882378466; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1580882409694%7C482378456_901%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1580882388947%7C%7C; DOMAIN=10.100.22.24");

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
		"Snapshot=t240.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=0ed5e2f1-a6bb-4727-a9ee-cbe6ded87bcb", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=1$482411448_279h1vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580884211460|1580882378466; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t241.inf", 
		LAST);

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

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
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

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZR7yBQeyLwDEjLe_YgOYkIy1_PJqbJCMtkcnz6SQjLbnQilEkIy3RZ88eJCMt0miFOSQjLRv2j6AkIy3wFhzoJCMtOE-ZNiQU", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t246.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1580882412707", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t247.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1580882412708", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t248.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1580882412711", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t249.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"0ed5e2f1-a6bb-4727-a9ee-cbe6ded87bcb");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882412712", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t252.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/104/7w4gbjne/websocket", 
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
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1580882412714", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t254.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1580882412715", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t255.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1580882412709", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580884219767|1580882378466; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t257.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t258.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1580882412710", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t259.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580884222722|1580882378466; DOMAIN=10.100.22.24");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t260.inf", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1580882412706", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t261.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1580882412705", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t262.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1580882412713", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("dtPC=1$482411448_279h-vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580884228256|1580882378466; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882412716", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeAlert_02_Login",LR_AUTO);

	lr_think_time(3);

	web_url("7052_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882412717", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeAlert_03_NavigateQuantitativeAlert");

	web_add_cookie("dtSa=true%7CC%7C-1%7CQuantitative%20Configuration%7C-%7C1580882461529%7C482411448_279%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1580882424192%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"0ed5e2f1-a6bb-4727-a9ee-cbe6ded87bcb");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t266.inf", 
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

	web_reg_find("Text=Quantitative Configuration", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("create", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=1$482465428_461h1vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=9; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580884265443|1580882378466; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t271.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchFaersDisabledColumnsIndexes", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchFaersDisabledColumnsIndexes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getNumOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t273.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t274.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580884269441|1580882378466; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882465539", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/858/4t8no2s9/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_cookie("dtPC=1$482465428_461h-vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580884276229|1580882378466; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882465540", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t280.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882465541", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeAlert_03_NavigateQuantitativeAlert",LR_AUTO);

	lr_think_time(3);

	web_url("7052_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882465542", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzkuMC4zOTQ1LjEzMBopCAUQARobCg0IBRAGGAEiAzAwMTABEPP_BxoCGAiFOf-bIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDQ_gYaAhgIhsEozSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQtoAHGgIYCLwNQvkiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABELvqBhoCGAiWRgiqIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYCEqjxu8iBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJoZGgIYCCGbbzciBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgI1dRV4iIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ3iAaAhgIxTTUHyIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAh2x7GvIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAZGgIYCANKKcIiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEPQHGgIYCHNTbHkiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEMBnGgIYCCsI-JUiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEPWFAxoCGAgD8cQPIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCtARoCGAg9TWLhIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t283.inf", 
		LAST);

	web_url("7052_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882465543", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"0ed5e2f1-a6bb-4727-a9ee-cbe6ded87bcb");

	web_submit_data("searchViews", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=voltaren", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={\"filter0\":null,\"filter1\":null,\"filter2\":null,\"filter3\":null,\"filter4\":null,\"filter5\":null,\"filter6\":null,\"filter7\":null}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL=http://10.100.22.24:8181/signal/productDictionary/getSelectedItem?productId=-1088411109&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=-1088411109", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchAllowedUsers", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/fetchAllowedUsers?productList=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?term=bha&max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882465544", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t290.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeAlert_04_CreateQuantitativeAlert");

	web_add_cookie("dtSa=true%7CC%7C-1%7CSave%20%26%20Run%7C-%7C1580882549384%7C482465428_461%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FaggregateCaseAlert%2Fcreate%7CQuantitative%20Configuration%7C1580882472165%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=PV Signal - Execution Status", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("run", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/create", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=delimiter", "Value=none", ENDITEM, 
		"Name=owner", "Value=7052", ENDITEM, 
		"Name=optradio", "Value=on", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"VOLTAREN\",\"id\":\"-1088411109\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM, 
		"Name=studySelection", "Value=", ENDITEM, 
		"Name=JSONExpressionValues", "Value=", ENDITEM, 
		"Name=_limitPrimaryPath", "Value=", ENDITEM, 
		"Name=eventSelection", "Value=", ENDITEM, 
		"Name=dateRangeType", "Value=CASE_RECEIPT_DATE", ENDITEM, 
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM, 
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM, 
		"Name=asOfVersionDateValue", "Value=Invalid date", ENDITEM, 
		"Name=asOfVersionDate", "Value=", ENDITEM, 
		"Name=_excludeFollowUp", "Value=", ENDITEM, 
		"Name=_includeLockedVersion", "Value=", ENDITEM, 
		"Name=includeLockedVersion", "Value=false", ENDITEM, 
		"Name=_applyAlertStopList", "Value=", ENDITEM, 
		"Name=applyAlertStopList", "Value=on", ENDITEM, 
		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM, 
		"Name=_groupBySmq", "Value=", ENDITEM, 
		"Name=_adhocRun", "Value=", ENDITEM, 
		"Name=_excludeNonValidCases", "Value=", ENDITEM, 
		"Name=alertQuery", "Value=", ENDITEM, 
		"Name=alertQueryName", "Value=", ENDITEM, 
		"Name=alertQueryId", "Value=", ENDITEM, 
		"Name=alertDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=dateRangeEnum", "Value=", ENDITEM, 
		"Name=alertDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=alertDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=dateRangeStart", "Value=", ENDITEM, 
		"Name=alertDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=dateRangeEnd", "Value=", ENDITEM, 
		"Name=drugType", "Value=SUSPECT", ENDITEM, 
		"Name=validQueries", "Value=", ENDITEM, 
		"Name=_event_exactSearch", "Value=", ENDITEM, 
		"Name=_product_exactSearch", "Value=", ENDITEM, 
		"Name=_study_exactSearch", "Value=", ENDITEM, 
		"Name=_study_imp", "Value=", ENDITEM, 
		"Name=templateQueries[0].version", "Value=", ENDITEM, 
		"Name=templateQueries[0].id", "Value=", ENDITEM, 
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM, 
		"Name=templateQueries[0].new", "Value=true", ENDITEM, 
		"Name=templateQueries[0].rptTempId", "Value=", ENDITEM, 
		"Name=templateQueries[0].header", "Value=", ENDITEM, 
		"Name=templateQueries[0].title", "Value=", ENDITEM, 
		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[0].templateName", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryId", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryName", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=", ENDITEM, 
		"Name=spotfireType", "Value=DRUG", ENDITEM, 
		"Name=spotfireDaterange", "Value=CUMULATIVE", ENDITEM, 
		"Name=name", "Value=Alert5Feb", ENDITEM, 
		"Name=sharedWith", "Value=User_7052", ENDITEM, 
		"Name=priority", "Value=6280", ENDITEM, 
		"Name=assignedToValue", "Value=User_7052", ENDITEM, 
		"Name=description", "Value=", ENDITEM, 
		"Name=TimeZoneSelectlist", "Value=", ENDITEM, 
		"Name=intervalSelectlist", "Value=none", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=repeat-monthly", "Value=bysetpos", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=monthlySelectlist", "Value=SU", ENDITEM, 
		"Name=repeat-yearly", "Value=bymonthday", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=yearlyDateSelectlist", "Value=1", ENDITEM, 
		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM, 
		"Name=yearlyDaySelectlist", "Value=1", ENDITEM, 
		"Name=EndSelectlist", "Value=never", ENDITEM, 
		"Name=isEnabled", "Value=true", ENDITEM, 
		"Name=schedulerTime", "Value=2020-02-05 06:01:01", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-02-05T06:01Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
		"Name=repeatExecution", "Value=false", ENDITEM, 
		"Name=editAggregate", "Value=false", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=previousAction", "Value=create", ENDITEM, 
		"Name=signalId", "Value=", ENDITEM, 
		"Name=_csrf", "Value=0ed5e2f1-a6bb-4727-a9ee-cbe6ded87bcb", ENDITEM, 
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=1$482551836_799h1vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580884351850|1580882378466; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580884352901|1580882378466; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("executionStatus", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=AGGREGATE_CASE_ALERT&_=1580882551927", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/891/1ppi_lde/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882551926", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580884356064|1580882378466; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=1$482551836_799h-vILOJIVPDBRFPLJCPLJTPNEICKLPILDJS; DOMAIN=10.100.22.24");

	web_url("7052_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882551928", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeAlert_04_CreateQuantitativeAlert",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580884360108|1580882378466; DOMAIN=10.100.22.24");

	web_url("7052_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580882551929", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeAlert_05_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1580882578504%7C482551836_799%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Fconfiguration%2FexecutionStatus%3FalertType%3DAGGREGATE_5FCASE_5FALERT%7CPV%20Signal%20-%20Execution%20Status%7C1580882556063%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);

	lr_end_transaction("QuantitativeAlert_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
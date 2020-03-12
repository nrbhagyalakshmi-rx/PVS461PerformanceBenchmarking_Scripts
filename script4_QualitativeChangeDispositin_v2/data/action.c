Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t121.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(NULL);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t122.inf", 
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
		"Snapshot=t123.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept-Language");

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
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"6c339ef648b2e6508840a0bc93d4b8a0eefdbb17");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=79", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxVisitor=1581072819088UOMKJJ96I5PR688MFND60R8P8V8J3CSU; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$72818982_36h1vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=-; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=1; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074619392|1581072819096; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t129.inf", 
		LAST);

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZvBF5tm-9p3sjLeeNQA4kIy3OQUx6JBQ=", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t130.inf", 
		LAST);

	web_add_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t131.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* QualitativeReview_01_OpenApplication */

	lr_start_transaction("QualitativeReview_02_Login");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g9mGPyqpIWImCgYIARAAGBASNwF-L9IrCvnq5gSVQOlDpC26qC8poSRgBCHKwfjWg5N0Tl7ktao9oudoeHuGutdi8MysYUKMcQY&scope=https://www.googleapis.com/auth/firebase.messaging", 
		LAST);

	web_custom_request("CHES4QEStwFBUEE5MWJGVmNFemtkQlRjaU1GSUtpT01oY0lUa2RpVFRuTkpiSFdzcXE2MFdFU1ItRTgxcjc5VjVWNU9sQ2kzTVY1aEQ2Umk5S0NLdDR6Y0FRNTlSMXJ3Z2U0Y2J3OHdJaWZHOTJTekVPX20xdkkxMGFBWkFQazE3MnFDclZCOEtDSEFkd25oTEZjV3U0d0xmN0k1THZsemtiSXpsMF9qM2lFMWhKdlVCSm8wTDZaX28weFBlZVEa", 
		"URL=https://clients4.google.com/invalidation/android/request/CHES4QEStwFBUEE5MWJGVmNFemtkQlRjaU1GSUtpT01oY0lUa2RpVFRuTkpiSFdzcXE2MFdFU1ItRTgxcjc5VjVWNU9sQ2kzTVY1aEQ2Umk5S0NLdDR6Y0FRNTlSMXJ3Z2U0Y2J3OHdJaWZHOTJTekVPX20xdkkxMGFBWkFQazE3MnFDclZCOEtDSEFkd25oTEZjV3U0d0xmN0k1THZsemtiSXpsMF9qM2lFMWhKdlVCSm8wTDZaX28weFBlZVEaACoCCAAyH2NvbS5nb29nbGUuY2hyb21lLmludmFsaWRhdGlvbnM", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuffer", 
		"BodyBinary=\nY\n\\x06\n\\x04\\x08\\x03\\x10\\x02\\x12%\n\\x06\n\\x04\\x08\\x03\\x10\\x01\\x12\\x12\tr\\xEA\\xA5F\t\\x8B\\xC7\\xBB\\x11\\xEDD\\x05\\xA5M\\xF2\\xF0\\xB5\\x1A\\x07\\x08\\x86\\x18\\x10\\x03\\x18\\x01\\x1A\\x18\\x08\\x00\\x12\\x14\\xDA9\\xA3\\xEE^kK\r2U\\xBF\\xEF\\x95`\\x18\\x90\\xAF\\xD8\\x07\t \\xF3\\xC4\\xFB\\xFF\\xF4\\x80\\x03(\\x002\\x0118\\x9F\\x082\\x95\\x01\n\\x90\\x01\n\\x07\\x08\\x03\\x10\\xAC\\xA1\\xCD\t\\x12sMozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML"
		", like Gecko) Chrome/79.0.3945.130 Safari/537.36\\x1A\\x03C++\"\\x0Bchrome-sync \\x01", 
		LAST);

	web_add_cookie("dtPC=3$72818982_36h-vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=2; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074628174|1581072819096; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1581072848212%7C72818982_36%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1581072822163%7C%7C; DOMAIN=10.100.22.24");

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
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=c018fc2e-a1ac-4f03-b60f-e6bbe0e79d84", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=3$72905493_855h1vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074705501|1581072819096; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t137.inf", 
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
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t139.inf", 
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
		"Snapshot=t140.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1581072906692", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1581072906691", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1581072906695", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1581072906690", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1581072906693", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1581072906689", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"c018fc2e-a1ac-4f03-b60f-e6bbe0e79d84");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072906696", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1581072906694", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1581074712549|1581072819096; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1581072906698", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/075/fg0vz90p/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t153.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1581072906699", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t155.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t156.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t157.inf", 
		LAST);

	web_add_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t158.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1581072906697", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

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

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=uP62elmVOZBGPDV0AAoXVQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x14bhagya.n.r@gmail.com\\x104\\x18\\x02*T\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012 \\x08\\xDE\\xD8\\x12\\x12\\x1A \\x00H\\xBF\\xBF\\xA2\\xFA\\x81.p\\xBF\\xBF\\xA2\\xFA\\x81.x\\x00\\x80\\x01\\xFD\\xC0\\xA2\\xFA\\x81.2!\\x08\\x81\\xF5\\x02\\x12\\x1B \\x00H\\xBF\\xBF\\xA2\\xFA\\x81.p\\xBF\\xBF\\xA2\\xFA\\x81.\\x88\\x01\\xBB\\xDC\\x88\\xC6\\x95\\x93\\xA0\\xB4\\x01@\\x00H\\x04\\xC0>\\x01:%z00000147-73aa-5583-0000-000053d3e1e0R\\xD0\\x01\n\\x14\\x12\\x12 \\x00"
		"(\\x008\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x00`\\x07\n4*2\\x08\\xEE\\xF7!\\x10\\x00\\x18\\x00 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00p\\x02x\\xC2\\x04\\x80\\x01\\x01\\x88\\x01\\x02\\x90\\x01\\x81\\xF5\\x02\\xA0\\x01\\x00\\xA8\\x01\\x00\n9*7\\x08\\xB4\\xD2$\\x10\\x00\\x18\\x00 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00p\\x0Bx\\xC2\\x04\\x80\\x01\\x01\\x88\\x01\\x00\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xEE\\xF7!\\xA0\\x01\\x00\\xA8\\x01\\x00\nA*?"
		"\\x08\\xDE\\xD8\\x12\\x10\\x00\\x18\\x00 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\xBA\\xA4\\xAA\\x01p\\x02x\\xC2\\x04\\x80\\x01\\x00\\x88\\x01\\x02\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xB4\\xD2$\\xA0\\x01\\x00\\xA8\\x01\\x00\\x10\\x01\\x18\\x00 \\x00Z\\x80\\x01\n~\\x12|Chrome WIN 79.0.3945.130 (e22de67c28798d98833a7137c0e22876237fc40a-refs/branch-heads/3945@{#1047}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x04\\x08\\x00\\x10\\x00r\\x0BeiUQOjMnYqA", 
		LAST);

	lr_end_transaction("QualitativeReview_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("dtPC=3$72905493_855h-vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074720989|1581072819096; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("6979_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072906700", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6979_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072906701", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeReview_03_NavigateTriggeredAlertsQualitativeReview");

	web_add_cookie("dtSa=true%7CC%7C-1%7CQualitative%20Review%7C-%7C1581072964652%7C72905493_855%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1581072914885%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"c018fc2e-a1ac-4f03-b60f-e6bbe0e79d84");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t163.inf", 
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

	web_reg_find("Text=Qualitative Review", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("review", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzkuMC4zOTQ1LjEzMBopCAUQARobCg0IBRAGGAEiAzAwMTABEL-BCBoCGAjThjvRIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDD_wYaAhgI4WowMSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ6IEHGgIYCO609pAiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEIjsBhoCGAjD70kLIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYCEqjxu8iBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJoZGgIYCCGbbzciBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgI1dRV4iIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ_iAaAhgITl2EYCIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAh2x7GvIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAZGgIYCANKKcIiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEPcHGgIYCMj0R7UiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIloGgIYCFvP4fsiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEMGHAxoCGAiBXuvpIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCvARoCGAib5bBHIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t165.inf", 
		LAST);

	web_add_cookie("dtPC=3$72966386_736h1vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=9; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074766395|1581072819096; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities", 
		"URL=http://10.100.22.24:8181/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL=http://10.100.22.24:8181/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("listConfig", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/listConfig?adhocRun=false&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=caseCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=newCases&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=closedCaseCount&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&"
		"columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=alertPriority&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1581072966471", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("6979_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072966472", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/815/6nsxi8g0/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_cookie("dtPC=3$72966386_736h-vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074774004|1581072819096; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("6979_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072966473", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_03_NavigateTriggeredAlertsQualitativeReview",LR_AUTO);

	lr_think_time(3);

	web_url("6979_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072966474", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeReview_04_ClickOnAlertName");

	web_add_cookie("dtSa=true%7CC%7C-1%7CTest_7Feb_6%7C-%7C1581072993700%7C72966386_736%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FsingleCaseAlert%2Freview%7CQualitative%20Review%7C1581072969924%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Qualitative Alert Details", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$72995895_455h1vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581074795904|1581072819096; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6199&_=1581072995968", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1581074799197|1581072819096; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$72995895_455h2vPMRBJBOMMTKSALMOMOFPTLSLQMGMLEGP; DOMAIN=10.100.22.24");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("6979_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995969", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6979_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995970", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1581074799239|1581072819096; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/423/2go_23w4/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("X-CSRF-TOKEN", 
		"c018fc2e-a1ac-4f03-b60f-e6bbe0e79d84");

	web_submit_data("68", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/68?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=priority", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=actions", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=false", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=productName", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=pt", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=listedness", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=outcome", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=false", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=disposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=false", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=conComit", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=serious", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=country", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=age", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=gender", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=death", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=caseType", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=submitter", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("priority.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t181.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("action_drop_down.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t182.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t183.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bulk_operation_options.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/bulk_operation_options.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t184.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("QualitativeReview_04_ClickOnAlertName",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Origin");

	web_add_header("Accept", 
		"*/*");

	web_url("6979_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995971", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("User-Agent", 
		"Chrome WIN 79.0.3945.130 (e22de67c28798d98833a7137c0e22876237fc40a-refs/branch-heads/3945@{#1047}) channel(stable)");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		LAST);

	lr_start_transaction("QualitativeReview_05_SelectNCasesandClickonDisposition");

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,mimojjlkmoijpicakmndhoigimigcmbb,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,bklopemakmnopmghhmccadeonafabnal,jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-79.0.3945.130");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:178824112&cup2hreq=9d7af4f82ed71dde0f9685e4ea0547efd408ad9f5eae5e0804f0e52a44736393", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{94e7c214-bb37-4ee9-99d1-a61a9b639fb2}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBD\",\"cohort\":\"1:bm1:ukx@0.1\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.64c0ff22c119d7881f617de7f2fc4111b6fbd86410d455c0b7e9bb5975918b7b\"}]},\"ping\":{\"ping_freshness\":\"{79c10533-b76f-4d5d-9e7d-d36e09edeb17}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"9.9.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBD\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{b077d8bd-81dd-4039-a044-9443d2ce2062}\",\"rd\":4784},\""
		"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBD\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f642bc25e95282db4b56f59a8323b06ce073351fc2844217bcb157852cbec1f7\"}]},\"ping\":{\"ping_freshness\":\"{3e182d68-e806-4861-9d2c-84c6b6170951}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"5681\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBD\""
		",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a9e5c338-2a73-4284-bf4f-430faa4de07f}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{249b809f-a521-42bd-87fd-f5981d763fb7}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBD\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{d4c1713b-40a7-4ed8-892b-c6b54e84e4e6}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBD\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{b0dce7da-b2b9-40b7-a962-b5da74b72f53}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"CHBD\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4b78391059704408ee3f5c7dcc13ab02384be6f62656c1b727d267faa1317713\"}]},\"ping\":{\""
		"ping_freshness\":\"{2c92bbcf-a0c2-47b3-86e1-68fa8fbae9ac}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"32.0.0.321\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1ff88c29-e5a4-49bc-92ad-9d60cb2e7d2f}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBD\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages"
		"\":{\"package\":[{\"fp\":\"1.f298eb5adfbd0b201a6afd399da93bb3f1516e7c13f046fb94b221e9120081ee\"}]},\"ping\":{\"ping_freshness\":\"{eb48ec4c-5e59-4fa9-b0be-8c983a0e99c7}\",\"rd\":4784},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"79.228.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBD\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{355c2950-6950-47ce-bf1d-d2e1a46d5843}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"CHBD\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.bca9d2c2a453524714c034c874bf787c2f5c68b8d5c6233a18ba8e14c402091d\"}]},\"ping\":{\"ping_freshness\":\""
		"{45bd06be-5e4c-47be-af23-5e16a5c28679}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"2\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBD\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9957d2a200b341dd2b77fb9e64d26a9d45773d3c6d50be5380e56f87b113d3ab\"}]},\"ping\":{\"ping_freshness\":\"{025ecf6a-793c-47f9-8c04-afc765dcf10c}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"71\"}],\"arch\":\"x64\",\""
		"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{659dce27-8909-4c4c-ba8f-b191ee63b7bd}\",\"sessionid\":\"{ef0abac5-7acf-468f-be91-11b8104baa32}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,"
		"\"version\":\"1.3.35.442\"},\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":4090,\"downloaded\":4457,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"5682\",\"previousversion\":\"5681\",\"total\":4457,\"url\":\"http://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/5682/5681/1365fbe5096d62b6ac103ba0a7015684f67068dadab23aa00aa1bea8aba9a181.crxd\"},"
		"{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.a60c601f68845ab214e096c36bc0e967eb3d991e6a7b1c6236f6e1e4a5a8be24\",\"nextversion\":\"5682\",\"previousfp\":\"1.f642bc25e95282db4b56f59a8323b06ce073351fc2844217bcb157852cbec1f7\",\"previousversion\":\"5681\"}],\"version\":\"5682\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\""
		"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{5388ed74-a3b4-43a6-b3f9-245f2b9e4b5f}\",\"sessionid\":\"{ef0abac5-7acf-468f-be91-11b8104baa32}\",\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"c018fc2e-a1ac-4f03-b60f-e6bbe0e79d84");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("changeDisposition", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/changeDisposition", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=selectedRows", "Value=[{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":573668},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":551315},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":556244},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":600059},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":591134},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":591132},{\"configObj.id\":58,\"executedConfigObj.id\":68,\""
		"alert.id\":591130},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":591128},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":591126},{\"configObj.id\":58,\"executedConfigObj.id\":68,\"alert.id\":591124}]", ENDITEM, 
		"Name=justification", "Value=Requires further communication and action for current signal/safety observation", ENDITEM, 
		"Name=validatedSignalName", "Value=PerfSignal", ENDITEM, 
		"Name=productJson", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"PHENYTOIN\"}],\"4\":[],\"5\":[]}", ENDITEM, 
		"Name=targetDisposition.id", "Value=25", ENDITEM, 
		"Name=incomingDisposition", "Value=Review Required", ENDITEM, 
		LAST);

	web_submit_data("68_2", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/68?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=true&filters=[%22Review%20Required%22,%22Validated%20Observation%22]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=priority", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=actions", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=false", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=productName", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=pt", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=listedness", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=outcome", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=false", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=false", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=serious", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=disposition", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=country", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=age", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=gender", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=death", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=caseType", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=submitter", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_submit_data("68_3", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/68?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=true&filters=[%22Review%20Required%22,%22Validated%20Observation%22]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=3", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=priority", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=actions", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=false", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=productName", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=pt", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=listedness", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=outcome", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=false", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=false", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=serious", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=disposition", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=country", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=age", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=gender", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=death", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=caseType", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=submitter", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995972", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_05_SelectNCasesandClickonDisposition",LR_AUTO);

	lr_think_time(3);

	web_url("6979_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995973", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6979_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995974", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6979_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581072995975", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeReview_07_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1581073297170%7C72995895_455%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FsingleCaseAlert%2Fdetails%3FcallingScreen%3Dreview%26configId%3D68%7CQualitative%20Alert%20Details%7C1581073004264%7C%7C; DOMAIN=10.100.22.24");

	web_url("discardTempChanges", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6199", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=68", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);

	lr_end_transaction("QualitativeReview_07_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Login", 
		LAST);

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
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
		"Snapshot=t345.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

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
		"Snapshot=t346.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g9mGPyqpIWImCgYIARAAGBASNwF-L9IrCvnq5gSVQOlDpC26qC8poSRgBCHKwfjWg5N0Tl7ktao9oudoeHuGutdi8MysYUKMcQY&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t347.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g9mGPyqpIWImCgYIARAAGBASNwF-L9IrCvnq5gSVQOlDpC26qC8poSRgBCHKwfjWg5N0Tl7ktao9oudoeHuGutdi8MysYUKMcQY", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"*/*");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t348.inf", 
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
		"Snapshot=t349.inf", 
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
		"Snapshot=t350.inf", 
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
		"Snapshot=t351.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t352.inf", 
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
		"Snapshot=t353.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxVisitor=1581054427810K6VHARG0AMTHDP64P3OCCGB3I256S3MJ; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=1$54427803_785h1vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=-; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=2; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056227863|1581054427814; DOMAIN=10.100.22.24");

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
		"Snapshot=t354.inf", 
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
		"Snapshot=t355.inf", 
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
		"Snapshot=t356.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* SignalReports_01_OpenApplication */

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("token_3", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t357.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g9mGPyqpIWImCgYIARAAGBASNwF-L9IrCvnq5gSVQOlDpC26qC8poSRgBCHKwfjWg5N0Tl7ktao9oudoeHuGutdi8MysYUKMcQY&scope=https://www.googleapis.com/auth/firebase.messaging", 
		LAST);

	lr_start_transaction("SignalReports_02_Login");

	web_add_cookie("rxvt=1581056230867|1581054427814; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=1$54427803_785h-vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1581054529913%7C54427803_785%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1581054430865%7C%7C; DOMAIN=10.100.22.24");

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
		"Snapshot=t358.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=2a3f7c65-5bee-4277-9b9b-21d83965790d", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=1$54532359_770h1vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056332372|1581054427814; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t359.inf", 
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
		"Snapshot=t360.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t361.inf", 
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
		"Snapshot=t362.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1581054533429", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t363.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1581054533430", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t364.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1581054533428", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t365.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1581054533433", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t366.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1581054533431", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t367.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6979", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054533434", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t368.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t369.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1581054533427", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t370.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t371.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1581054533432", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t372.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1581054533436", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t373.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/409/rlg53q7j/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1581054533437", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t375.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t376.inf", 
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
		"Snapshot=t377.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1581054533435", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t379.inf", 
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
		"Snapshot=t380.inf", 
		LAST);

	web_add_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t381.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("dtPC=1$54532359_770h-vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056346715|1581054427814; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=1; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054533438", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t382.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_02_Login",LR_AUTO);

	lr_think_time(3);

	web_url("6979_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054533439", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t383.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_03_NavigateToSignalReports");

	web_add_cookie("dtSa=true%7CC%7C-1%7CReporting%7C-%7C1581054567167%7C54532359_770%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1581054542652%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t384.inf", 
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

	web_reg_find("Text=Report", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t385.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=1$54569825_468h1vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=11; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056369840|1581054427814; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t386.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t387.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t388.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("6979_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569956", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t390.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569957", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t391.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1581056373257|1581054427814; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t392.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchFaersDisabledColumnsIndexes", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchFaersDisabledColumnsIndexes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t393.inf", 
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
		"URI=ws://10.100.22.24:8181/signal/stomp/272/c1zb04yd/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzkuMC4zOTQ1LjEzMBopCAUQARobCg0IBRAGGAEiAzAwMTABELGBCBoCGAi28bTvIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARC4_wYaAhgIrciWGiIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ34EHGgIYCJR5iRciBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEPvrBhoCGAidcN6vIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYCEqjxu8iBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJoZGgIYCCGbbzciBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgI1dRV4iIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ_iAaAhgITl2EYCIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAh2x7GvIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAZGgIYCANKKcIiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEPYHGgIYCLa-N4IiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIRoGgIYCCX1gxEiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABELKHAxoCGAhPQpAMIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCvARoCGAib5bBHIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t395.inf", 
		LAST);

	web_add_cookie("dtPC=1$54569825_468h-vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056382635|1581054427814; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("history_2", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569958", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t396.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_03_NavigateToSignalReports",LR_AUTO);

	lr_think_time(3);

	web_add_header("Accept", 
		"*/*");

	web_url("6979_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569959", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t397.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_3", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569960", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t398.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_submit_data("searchViews", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t399.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=penicillin g", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=delimiter", "Value=;", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={\"filter0\":null,\"filter1\":null,\"filter2\":null,\"filter3\":null,\"filter4\":null,\"filter5\":null,\"filter6\":null,\"filter7\":null}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL=http://10.100.22.24:8181/signal/productDictionary/getSelectedItem?productId=178470882&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t400.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t401.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("history_4", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569961", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t402.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_submit_data("getPreLevelProductParents_2", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t403.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=5", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_3", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t404.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=4", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_4", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t405.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_5", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t406.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_6", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t407.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=-687367064,-1006509822,1641439079", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569962", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t408.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_5", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569963", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t409.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_6", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569964", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t410.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569965", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t411.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_7", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569966", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t412.inf", 
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
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,gcmjkmgdlgnkkcocmoeiminaijmmjnii,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,aemomkdncapdnfajjbbcbdebjljbpmpj,ehgidpndbllacpjalkiimkbadgjfnnmc,gkmgaooipdjhmangpemjhigmamcehddo,giekcmmlnklenlaomppkphknjmnnpneh,bklopemakmnopmghhmccadeonafabnal,jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-79.0.3945.130");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:3338433758&cup2hreq=7f8a220b9746b94a7c16bf28a2c2869b7635d8e4a1e57a652653436594025998", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t413.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{21e88827-2400-4f74-bdd5-0411c6af4f29}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"CHBD\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.4b78391059704408ee3f5c7dcc13ab02384be6f62656c1b727d267faa1317713\"}]},\"ping\":{\"ping_freshness\":\"{fc5d28a0-9a1e-4333-8332-9495e7082155}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"32.0.0.321\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBD\",\"cohort\":\"1:bm1:ukx@0.1\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.64c0ff22c119d7881f617de7f2fc4111b6fbd86410d455c0b7e9bb5975918b7b\"}]}"
		",\"ping\":{\"ping_freshness\":\"{15dfd1e8-8b05-45c2-b5a9-c578cd80dfa8}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"9.9.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{720c7450-88b1-48ef-af15-60c8f7f80ba4}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{5b1db7cf-7616-44c2-864a-ad111a1a7083}\",\"rd"
		"\":4784},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBD\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{1b1d7119-9a7b-45c7-b0a6-d90a46b4cbf4}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBD\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{296ce506-06c6-4149-8cb1-88332a48cfaf}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBD\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.3ab38d920599a36a8b78eaf36c18d9c5d39fd354e9f38d8015b96c0ca7909ea2\"}]},\"ping\":{\"ping_freshness\":\"{a7cb918e-8060-48d4-8f9c-c30737286875}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"5680\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{57890b00-6738-46ed-b04f-4a379d22c4e0}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBD\",\"cohort\":\"1:ofl:\",\""
		"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{67e361d5-9cd4-4b30-ab53-3852a0621775}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBD\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\""
		"fp\":\"1.f298eb5adfbd0b201a6afd399da93bb3f1516e7c13f046fb94b221e9120081ee\"}]},\"ping\":{\"ping_freshness\":\"{69e1f4cc-4c16-4041-8b1d-73e72e6d3b51}\",\"rd\":4784},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"79.228.200\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBD\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\""
		"ping\":{\"ping_freshness\":\"{9dc083b1-1107-4384-a2b8-b543e900525b}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"CHBD\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.bca9d2c2a453524714c034c874bf787c2f5c68b8d5c6233a18ba8e14c402091d\"}]},\"ping\":{\"ping_freshness\":\"{2951ebe2-aaff-4373-a8e7-fc8eb55aeb35}\",\"rd\":4784},\"updatecheck\":{},\"version\":\""
		"2\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBD\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.57befb24588bb0c7ec4f25fe31a77e9c51d76a813286fd4ffde3ca72765f7e5a\"}]},\"ping\":{\"ping_freshness\":\"{e7b3e9d4-f050-4ba0-853e-d3ccce394631}\",\"rd\":4784},\"updatecheck\":{},\"version\":\"70\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{ba16b71e-58a0-4742-bab7-174e1609e78f}\",\"sessionid\":\"{8ffe6736-4538-4b23-8643-2afe41e555e3}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t414.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":4039,\"downloaded\":4475,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"5681\",\"previousversion\":\"5680\",\"total\":4475,\"url\":\"http://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/5681/5680/1cce571baa8491801169b55ef98b5d25190a72a57fec97e0a9ed85358973f817.crxd\"},"
		"{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.f642bc25e95282db4b56f59a8323b06ce073351fc2844217bcb157852cbec1f7\",\"nextversion\":\"5681\",\"previousfp\":\"1.3ab38d920599a36a8b78eaf36c18d9c5d39fd354e9f38d8015b96c0ca7909ea2\",\"previousversion\":\"5680\"}],\"version\":\"5681\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\""
		"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{8ddacfdc-946e-4f6b-9d10-f51b0a255413}\",\"sessionid\":\"{8ffe6736-4538-4b23-8643-2afe41e555e3}\",\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("history_8", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569967", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t415.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_9", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569968", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t416.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569969", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t417.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_10", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569970", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t418.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_11", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569971", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t419.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569972", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t420.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_12", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569973", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t421.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_13", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569974", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t422.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569975", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t423.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_14", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569976", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t424.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_15", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569977", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t425.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_16", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569978", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t426.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_17", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569979", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t427.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_18", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569980", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t428.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_19", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569981", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t429.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_20", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569982", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t430.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_21", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569983", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t431.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_custom_request("prepareICSRsReport", 
		"URL=http://10.100.22.24:8181/signal/report/prepareICSRsReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=ICSR_BY_CASE_CHARACTERISTICS&dataSource=pva&reportName=PerfRep1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("history_22", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569984", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t433.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_23", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569985", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t434.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_24", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569986", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_25", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569987", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t436.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_26", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569988", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t437.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_27", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569989", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t438.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569990", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t439.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_28", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569991", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t440.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569992", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t441.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_05_InitiatePBRERSignalSummaryReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_custom_request("requestReport", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t442.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=PBRER_SIGNAL_SUMMARY&dataSource=pva&reportName=PBRERPerfRep1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("notifications.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/notifications.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t443.inf", 
		LAST);

	web_url("history_29", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569993", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t444.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569994", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t445.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_05_InitiatePBRERSignalSummaryReport",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_30", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569995", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t446.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569996", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t447.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_06_InitiateSignalSummaryReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_custom_request("requestReport_2", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t448.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNAL_SUMMARY_REPORT&dataSource=pva&reportName=SignalSummaryPerfRep1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("history_31", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569997", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t449.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_32", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054569998", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t450.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054569999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t451.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_06_InitiateSignalSummaryReport",LR_AUTO);

	lr_think_time(3);

	web_url("6979_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570000", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t452.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_07_InitiateSignalsByState");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_custom_request("requestReport_3", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t453.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNALS_BY_STATE&dataSource=pva&reportName=SignalsByStatePerfRep1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("history_33", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570001", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t454.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570002", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t455.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_07_InitiateSignalsByState",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_34", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570003", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t456.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570004", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t457.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6979_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570005", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t458.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_08_InitiateSignalProductsAction");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_custom_request("requestReport_4", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t459.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNAL_PRODUCT_ACTIONS&dataSource=pva&reportName=SignalProductByActionPerfRep1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&"
		"socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D="
		"Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("history_35", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570006", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t460.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_36", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570007", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t461.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570008", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t462.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_08_InitiateSignalProductsAction",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_37", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570009", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t463.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_38", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570010", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t464.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570011", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t465.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_09_InitiateMemoReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2a3f7c65-5bee-4277-9b9b-21d83965790d");

	web_custom_request("requestReport_5", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t466.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=MEMO_REPORT&dataSource=pva&reportName=memoreportsPerfRep1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("history_39", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570012", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t467.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570013", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t468.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_09_InitiateMemoReport",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_40", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1581054570014", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t469.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("6979_23", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/6979?_=1581054570015", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t470.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_10_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1581055589997%7C54569825_468%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Freport%2Findex%7CReport%7C1581054575297%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t471.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	lr_end_transaction("SignalReports_10_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
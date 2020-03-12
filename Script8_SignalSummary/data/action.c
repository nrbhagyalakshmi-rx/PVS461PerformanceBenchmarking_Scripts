Action()
{

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
		"Snapshot=t247.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t248.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

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
		"Snapshot=t249.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxVisitor=1580885182897JLEPQBEERGRLVH2D56TB74FIFBDT4DOP; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=2$485182890_198h1vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=-; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=2; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580886982950|1580885182901; DOMAIN=10.100.22.24");

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
		"Snapshot=t251.inf", 
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
		"Snapshot=t252.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"000e9c45fd27651dad5b2fd0150876443396bdf0");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=79", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t253.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580886986376|1580885182901; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t254.inf", 
		LAST);

	/* Signalsummary_01_OpenApplication */

	lr_start_transaction("Signalsummary_02_Login");

	web_add_cookie("dtPC=2$485182890_198h-vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580886996142|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1580885205811%7C485182890_198%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1580885186941%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_reg_find("Text=Dashboard", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

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
		"Snapshot=t255.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=ba3b77ab-aa4a-4c14-8c39-c558b76a611b", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=2$485207681_91h1vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580887007693|1580885182901; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t256.inf", 
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
		"Snapshot=t257.inf", 
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
		"Snapshot=t258.inf", 
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
		"Snapshot=t259.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t260.inf", 
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
		"Snapshot=t261.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1580885209574", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t262.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1580885209575", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t264.inf", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1580885209578", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t266.inf", 
		LAST);

	web_url("7052", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885209579", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1580885209573", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1580885209572", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"ba3b77ab-aa4a-4c14-8c39-c558b76a611b");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t271.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_add_cookie("rxvt=1580887018763|1580885182901; DOMAIN=10.100.22.24");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t272.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1580885209576", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t273.inf", 
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
		"URI=ws://10.100.22.24:8181/signal/stomp/829/udc9jzk1/websocket", 
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
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1580885209581", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1580885209582", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1580885209577", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1580885209580", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("dtPC=2$485207681_91h-vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580887026292|1580885182901; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885209583", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t279.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885209584", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t280.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_03_NavigateSignalSummary");

	web_add_cookie("dtSa=true%7CC%7C-1%7CSignal%20Summary%7C-%7C1580885267538%7C485207681_91%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1580885222228%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"ba3b77ab-aa4a-4c14-8c39-c558b76a611b");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t281.inf", 
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

	web_reg_find("Text=Validated Signals", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=2$485269247_707h1vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=11; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580887069261|1580885182901; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=35305&_=1580885269345", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("list", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/list?_=1580885269346", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("7052_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885269347", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t286.inf", 
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
		"URI=ws://10.100.22.24:8181/signal/stomp/964/rlr25qco/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	lr_end_transaction("Signalsummary_03_NavigateSignalSummary",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580887073505|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=2$485269247_707h-vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885269348", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580887077553|1580885182901; DOMAIN=10.100.22.24");

	web_url("7052_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885269349", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885269350", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t290.inf", 
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
		"Ch0KDGdvb2dsZWNocm9tZRINNzkuMC4zOTQ1LjEzMBopCAUQARobCg0IBRAGGAEiAzAwMTABEPb_BxoCGAiQafekIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDS_gYaAhgIcmCKDSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQuYAHGgIYCCSBju0iBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEL3qBhoCGAjmF1laIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYCEqjxu8iBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJoZGgIYCCGbbzciBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgI1dRV4iIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ3iAaAhgIxTTUHyIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAh2x7GvIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAZGgIYCANKKcIiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEPQHGgIYCHNTbHkiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEMFnGgIYCO0ne3IiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEPeFAxoCGAhdHmcOIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCtARoCGAg9TWLhIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t291.inf", 
		LAST);

	lr_start_transaction("Signalsummary_04_ClickOnaSignal");

	web_add_cookie("dtSa=true%7CC%7C-1%7CPERF1%7C-%7C1580885297248%7C485269247_707%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FvalidatedSignal%2Findex%7CValidated%20Signals%7C1580885273503%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Validated Signals", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=2$485300797_158h1vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=4; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580887100810|1580885182901; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getDmsFolders", 
		"URL=http://10.100.22.24:8181/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"ba3b77ab-aa4a-4c14-8c39-c558b76a611b");

	web_custom_request("30322", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/fetchLinkedConfiguration/30322", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580887107463|1580885182901; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("singleCaseAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/singleCaseAlertList?id=30322&_=1580885300893", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300891", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("aggregateCaseAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/aggregateCaseAlertList?id=30322&_=1580885300892", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("adHocAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/adHocAlertList?id=30322&_=1580885300894", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/literatureAlertList?id=30322&_=1580885300895", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t305.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listByAlert", 
		"URL=http://10.100.22.24:8181/signal/action/listByAlert?alertId=30322&appType=Signal%20Management&_=1580885300897", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("peAnalysis", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/peAnalysis?id=30322&isTopic=false&_=1580885300896", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listBySignal", 
		"URL=http://10.100.22.24:8181/signal/alertDocument/listBySignal?signalId=30322&_=1580885300900", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchAttachments", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/fetchAttachments?alertId=30322&_=1580885300899", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("list_2", 
		"URL=http://10.100.22.24:8181/signal/meeting/list?alertId=30322&appType=Signal%20Management&_=1580885300898", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580887107732|1580885182901; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/156/so5xja0y/websocket", 
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

	web_url("30322_2", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/30322?_=1580885300901", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_04_ClickOnaSignal",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580887111871|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=2$485300797_158h-vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300902", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1580887115976|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=1; DOMAIN=10.100.22.24");

	web_url("7052_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300903", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t314.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_05_UpdateComments");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"ba3b77ab-aa4a-4c14-8c39-c558b76a611b");

	web_submit_data("update", 
		"Action=http://10.100.22.24:8181/signal/validatedSignal/update", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t315.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"PENICILLIN G\",\"id\":\"178470882\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM, 
		"Name=eventSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[{\"name\":\"Nephrotic syndrome\",\"id\":\"10029164\"}],\"5\":[],\"6\":[]}", ENDITEM, 
		"Name=name", "Value=PERF1", ENDITEM, 
		"Name=topic", "Value=", ENDITEM, 
		"Name=detectedBy", "Value=Company", ENDITEM, 
		"Name=detectedDate", "Value=04-Feb-2020", ENDITEM, 
		"Name=initialDataSource", "Value=Event under Special Monitoring   FDA TEST", ENDITEM, 
		"Name=signalSource", "Value=Event under Special Monitoring   FDA TEST", ENDITEM, 
		"Name=signalEvaluationMethod", "Value=[]", ENDITEM, 
		"Name=topicCategoryList", "Value=[]", ENDITEM, 
		"Name=description", "Value=DESCRIPTION", ENDITEM, 
		"Name=reasonForEvaluation", "Value=", ENDITEM, 
		"Name=priority", "Value=6280", ENDITEM, 
		"Name=assignedToValue", "Value=User_7052", ENDITEM, 
		"Name=aggReportStartDate", "Value=", ENDITEM, 
		"Name=aggReportEndDate", "Value=", ENDITEM, 
		"Name=signalActionTaken", "Value=[]", ENDITEM, 
		"Name=genericComment", "Value=notes1", ENDITEM, 
		"Name=haSignalStatus", "Value=", ENDITEM, 
		"Name=haDateClosed", "Value=", ENDITEM, 
		"Name=commentSignalStatus", "Value=loadrunner12345", ENDITEM, 
		"Name=signalId", "Value=30322", ENDITEM, 
		"Name=_csrf", "Value=ba3b77ab-aa4a-4c14-8c39-c558b76a611b", ENDITEM, 
		LAST);

	web_add_cookie("rxvt=1580887140862|1580885182901; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300904", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t316.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_05_UpdateComments",LR_AUTO);

	lr_think_time(3);

	web_url("7052_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300905", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t317.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_06_NavigateAssessmentTab");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"ba3b77ab-aa4a-4c14-8c39-c558b76a611b");

	web_submit_data("graphReport", 
		"Action=http://10.100.22.24:8181/signal/validatedSignal/graphReport", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dateRange", "Value=LAST_1_YEAR", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"PENICILLIN G\",\"id\":\"178470882\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM, 
		"Name=eventSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[{\"name\":\"Nephrotic syndrome\",\"id\":\"10029164\"}],\"5\":[],\"6\":[]}", ENDITEM, 
		"Name=validatedSignal.id", "Value=30322", ENDITEM, 
		LAST);

	lr_end_transaction("Signalsummary_06_NavigateAssessmentTab",LR_AUTO);

	lr_think_time(3);

	web_url("7052_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300906", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300907", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t320.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_07_NavigateActionsandWorkflow");

	lr_end_transaction("Signalsummary_07_NavigateActionsandWorkflow",LR_AUTO);

	lr_think_time(3);

	web_url("7052_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300908", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7052_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300909", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t322.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("newaction");

	lr_end_transaction("newaction",LR_AUTO);

	lr_think_time(3);

	web_url("7052_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300910", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t323.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300911", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t325.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("createaction");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"ba3b77ab-aa4a-4c14-8c39-c558b76a611b");

	web_submit_data("save", 
		"Action=http://10.100.22.24:8181/signal/action/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=config", "Value=6913", ENDITEM, 
		"Name=type", "Value=6797", ENDITEM, 
		"Name=assignedToValue", "Value=User_7052", ENDITEM, 
		"Name=dueDate", "Value=22-Feb-2020", ENDITEM, 
		"Name=details", "Value=loadrunner1", ENDITEM, 
		"Name=comments", "Value=", ENDITEM, 
		"Name=alertId", "Value=30322", ENDITEM, 
		"Name=appType", "Value=Signal Management", ENDITEM, 
		"Name=exeConfigId", "Value=", ENDITEM, 
		"Name=meetingId", "Value=", ENDITEM, 
		"Name=actionStatus", "Value=InProcess", ENDITEM, 
		"Name=actionId", "Value=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listByAlert_2", 
		"URL=http://10.100.22.24:8181/signal/action/listByAlert?alertId=30322&appType=Signal%20Management&_=1580885300912", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("30322_3", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/30322?_=1580885300915", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t328.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("list_3", 
		"URL=http://10.100.22.24:8181/signal/meeting/list?alertId=30322&appType=Signal%20Management&_=1580885300916", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t329.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7052_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300917", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t330.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("createaction",LR_AUTO);

	lr_think_time(3);

	web_url("7052_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300918", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t331.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_07_NavigateActivityLogTab");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("30322_4", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/30322?_=1580885300919", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("7052_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300920", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t333.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_07_NavigateActivityLogTab",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept-Language");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,llkgjffcdpffmhiakmfcdcblohccpfmo,hnimpnehoodheedghdeeijklkeaacbdc,oimompecagnajdejgnnjijobebaeigek,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,bklopemakmnopmghhmccadeonafabnal,giekcmmlnklenlaomppkphknjmnnpneh,jflookgnkcckhobaglndicnbbgbonegd,gcmjkmgdlgnkkcocmoeiminaijmmjnii");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-79.0.3945.130");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:927616004&cup2hreq=6a00124221c11273fa2fabda77ed920ea743466283737937afb3b3daffc54016", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{e1a92740-3604-4077-b7e4-7b2e27fc741f}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"CHBD\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.4b78391059704408ee3f5c7dcc13ab02384be6f62656c1b727d267faa1317713\"}]},\"ping\":{\"ping_freshness\":\"{93128984-593e-4df4-a812-1c4c3f1d5a09}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"32.0.0.321\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{220d334f-d34a-4587-82a3-fb22c251df11}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\""
		"CHBD\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{fc8a7ac4-e1c5-463f-9344-4bffc1c49897}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{84eb8577-9bb1-4db0-9018-d3b708e6f0ae}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\""
		"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBD\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{f4835909-1966-40b5-ad00-ffa591d65cec}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBD\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\""
		":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3bf2d3b81ffffe8ccf9bd01cffa699d1a592aa060f68d424951a6fb4aa9c4b11\"}]},\"ping\":{\"ping_freshness\":\"{cd3f640e-0698-4a4c-ba75-eed1af27bd34}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"5677\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"CHBD\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{83f761f1-0a93-410e-aae4-68c45fd10941}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\""
		"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBD\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f298eb5adfbd0b201a6afd399da93bb3f1516e7c13f046fb94b221e9120081ee\"}]},\"ping\":{\"ping_freshness\":\"{10b3556a-34f4-457a-b7e5-1e553de82949}\",\"rd\":4782},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"79.228.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBD\",\"cohort\":\"1:ofl:\",\""
		"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{cd2d47dc-fec1-4868-ba29-a4e39a95acd2}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"CHBD\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":"
		"\"1.bca9d2c2a453524714c034c874bf787c2f5c68b8d5c6233a18ba8e14c402091d\"}]},\"ping\":{\"ping_freshness\":\"{094d75dd-109d-4388-a72e-188d85b729c6}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"2\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBD\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\""
		"{c5f12570-fdbf-477c-bb77-45c4baa3273e}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBD\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.745cd87cb4ac32d099a7c4bfd52f6eedaeef42a387051590de46a1ad1d1437d4\"}]},\"ping\":{\"ping_freshness\":\"{102d0fd4-9ede-4253-9f96-0e04e12ecd71}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"69\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBD\",\"cohort\":\"1:bm1:uir@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.64c0ff22c119d7881f617de7f2fc4111b6fbd86410d455c0b7e9bb5975918b7b\"}]},\"ping\":{\"ping_freshness\":\"{8b95a6b4-a56f-4cd1-8b5a-6a1d5034d096}\",\"rd\":4782},\"updatecheck\":{},\"version\":\"9.9.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.973\"},\"prodversion\":\"79.0.3945.130\",\"protocol\":\"3.1\",\"requestid\":\"{69dfba73-5baf-443a-b0f1-32362b9523ea}\",\"sessionid\":\"{833c61e0-e0a7-40c9-953c-3646c3fdf3af}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"79.0.3945.130\"}}", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7052_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7052?_=1580885300921", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t335.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_08_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1580885534175%7C485300797_158%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FvalidatedSignal%2Fdetails%3Fid%3D30322%7CValidated%20Signals%7C1580885340865%7C%7C; DOMAIN=10.100.22.24");

	web_reg_find("Text=Login", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=30322", 
		"Snapshot=t336.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);

	lr_end_transaction("Signalsummary_08_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
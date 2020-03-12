Action()
{
lr_start_transaction("Signalsummary_01_OpenApplication");


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

/*Correlation comment - Do not change!  Original value='0f3c8966-75f9-49e8-bbf0-f850e79a4d7a' Name ='_csrf' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=_csrf",
		"TagName=input",
		"Extract=value",
		"Name=_csrf",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		LAST);

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Accept", 
		"*/*");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	
	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t15.inf", 
		LAST);

//	web_concurrent_end(NULL);

	
	web_add_cookie("rxvt=1580871759657|1580869954843; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	//web_concurrent_start(NULL);

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t18.inf", 
		LAST);

lr_end_transaction("Signalsummary_01_OpenApplication", LR_AUTO);

	/* Signalsummary_01_OpenApplication */

	lr_start_transaction("Signalsummary_02_Login");

	
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
		"Snapshot=t22.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=_csrf", "Value={_csrf}", ENDITEM,
		"Name=username", "Value=bhagya", ENDITEM,
		"Name=password", "Value=bhagya", ENDITEM,
		LAST);

	web_add_cookie("dtPC=1$469976392_648h1vLIJLNOTIHFWDIFPBGLKAQODBFJNFABUP; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580871776405|1580869954843; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

//	web_add_header("Accept", 
//		"*/*");

//	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t25.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t26.inf", 
		LAST);

////	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

//	web_add_header("Accept", 
//		"*/*");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t27.inf", 
		LAST);

	

	
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1580869977454", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1580869977453", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1580869977457", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t33.inf", 
		LAST);
		
		web_concurrent_end(NULL);


//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");
	
	web_concurrent_start(NULL);


	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

/*	web_add_cookie("rxvt=1580871784234|1580869954843; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/554/bpt2nv0t/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);*/

//	web_add_header("Accept", 
//		"image/webp,image/apng,image/*,*/*;q=0.8");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t38.inf", 
		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1580869977460", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1580869977456", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_cookie("rxvt=1580871785697|1580869954843; DOMAIN=10.100.22.24");

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1580869977461", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1580869977452", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1580869977451", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1580869977455", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1580869977459", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);
		
		web_concurrent_end(NULL);


	lr_end_transaction("Signalsummary_02_Login",LR_AUTO);

	lr_think_time(3);

	

	lr_start_transaction("Signalsummary_03_NavigateSignalSummary");

	web_add_cookie("dtSa=true%7CC%7C-1%7CSignal%20Summary%7C-%7C1580885267538%7C485207681_91%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1580885222228%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");
	
	web_concurrent_start(NULL);

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

//	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Validated Signals", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

/*	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);*/

/*	web_add_cookie("dtPC=2$485269247_707h1vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=11; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580887069261|1580885182901; DOMAIN=10.100.22.24");*/

	//web_add_auto_header("Accept", 
	//	"*/*");

	//web_add_header("X-Requested-With", 
	//	"XMLHttpRequest");

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

	//web_add_auto_header("Accept", 
	//	"application/json, text/javascript, */*; q=0.01");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("list", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/list?_=1580885269346", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	

	web_concurrent_end(NULL);


	lr_end_transaction("Signalsummary_03_NavigateSignalSummary",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580887073505|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=2$485269247_707h-vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	
	lr_start_transaction("Signalsummary_04_ClickOnaSignal");

	web_add_cookie("dtSa=true%7CC%7C-1%7CPerfSignal%7C-%7C1580885297248%7C485269247_707%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FvalidatedSignal%2Findex%7CValidated%20Signals%7C1580885273503%7C%7C; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Validated Signals", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	/*web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=2$485300797_158h1vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=4; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580887100810|1580885182901; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");*/
	
	web_concurrent_start(NULL);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

//web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getDmsFolders", 
		"URL=http://10.100.22.24:8181/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

web_concurrent_end(NULL);
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");

/*	web_custom_request("{signalid}", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/fetchLinkedConfiguration/{signalid}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);*/
		
		web_concurrent_start(NULL);

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_cookie("rxvt=1580887107463|1580885182901; DOMAIN=10.100.22.24");

//	web_revert_auto_header("X-Requested-With");

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("singleCaseAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/singleCaseAlertList?id={signalid}&_=1580885300893", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("aggregateCaseAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/aggregateCaseAlertList?id={signalid}&_=1580885300892", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("adHocAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/adHocAlertList?id={signalid}&_=1580885300894", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/literatureAlertList?id={signalid}&_=1580885300895", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t305.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listByAlert", 
		"URL=http://10.100.22.24:8181/signal/action/listByAlert?alertId={signalid}&appType=Signal%20Management&_=1580885300897", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("peAnalysis", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/peAnalysis?id={signalid}&isTopic=false&_=1580885300896", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listBySignal", 
		"URL=http://10.100.22.24:8181/signal/alertDocument/listBySignal?signalId={signalid}&_=1580885300900", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchAttachments", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/fetchAttachments?alertId={signalid}&_=1580885300899", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("list_2", 
		"URL=http://10.100.22.24:8181/signal/meeting/list?alertId={signalid}&appType=Signal%20Management&_=1580885300898", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);
		
		web_concurrent_end(NULL);

/*web_add_cookie("rxvt=1580887107732|1580885182901; DOMAIN=10.100.22.24");

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
		LAST);*/

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	/*web_url("{signalid}_2", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/{signalid}?_=1580885300901", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);*/

	lr_end_transaction("Signalsummary_04_ClickOnaSignal",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580887111871|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=2$485300797_158h-vGHTCJACCAJKTUCLWIPIAAVCMNNHEACJP; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	

	web_add_cookie("rxvt=1580887115976|1580885182901; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=1; DOMAIN=10.100.22.24");

	

	lr_start_transaction("Signalsummary_05_UpdateComments");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");

	web_submit_data("update", 
		"Action=http://10.100.22.24:8181/signal/validatedSignal/update", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t315.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"PENICILLIN G\",\"id\":\"178470882\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM, 
		"Name=eventSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[{\"name\":\"Nephrotic syndrome\",\"id\":\"10029164\"}],\"5\":[],\"6\":[]}", ENDITEM, 
		"Name=name", "Value=PerfSignal", ENDITEM, 
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
		"Name=assignedToValue", "Value=User_{assigneduserid}", ENDITEM, 
		"Name=aggReportStartDate", "Value=", ENDITEM, 
		"Name=aggReportEndDate", "Value=", ENDITEM, 
		"Name=signalActionTaken", "Value=[]", ENDITEM, 
		"Name=genericComment", "Value=notes1", ENDITEM, 
		"Name=haSignalStatus", "Value=", ENDITEM, 
		"Name=haDateClosed", "Value=", ENDITEM, 
		"Name=commentSignalStatus", "Value={comments}", ENDITEM, 
		"Name=signalId", "Value={signalid}", ENDITEM, 
		"Name=_csrf", "Value={_csrf}", ENDITEM, 
		LAST);

	

	lr_end_transaction("Signalsummary_05_UpdateComments",LR_AUTO);

	lr_think_time(3);

	

	lr_start_transaction("Signalsummary_06_NavigateAssessmentTab");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");

	web_submit_data("graphReport", 
		"Action=http://10.100.22.24:8181/signal/validatedSignal/graphReport", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dateRange", "Value=LAST_1_YEAR", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"PENICILLIN G\",\"id\":\"178470882\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM, 
		"Name=eventSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[{\"name\":\"Nephrotic syndrome\",\"id\":\"10029164\"}],\"5\":[],\"6\":[]}", ENDITEM, 
		"Name=validatedSignal.id", "Value={signalid}", ENDITEM, 
		LAST);

	lr_end_transaction("Signalsummary_06_NavigateAssessmentTab",LR_AUTO);

	lr_think_time(3);

	
//	lr_start_transaction("Signalsummary_07_NavigateActionsandWorkflow");

//	lr_end_transaction("Signalsummary_07_NavigateActionsandWorkflow",LR_AUTO);

	lr_think_time(3);

	

//	lr_start_transaction("newaction");

//	lr_end_transaction("newaction",LR_AUTO);

	lr_think_time(3);

	
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_start_transaction("createaction");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");

/*Correlation comment - Do not change!  Original value='38452' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=CorrelationParameter",
		"QueryString=$.actionInstance.id",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("save", 
		"Action=http://10.100.22.24:8181/signal/action/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=config", "Value=6913", ENDITEM, 
		"Name=type", "Value=6797", ENDITEM, 
		"Name=assignedToValue", "Value=User_{assigneduserid}", ENDITEM, 
		"Name=dueDate", "Value=22-Feb-2020", ENDITEM, 
		"Name=details", "Value=loadrunner1", ENDITEM, 
		"Name=comments", "Value=", ENDITEM, 
		"Name=alertId", "Value={signalid}", ENDITEM, 
		"Name=appType", "Value=Signal Management", ENDITEM, 
		"Name=exeConfigId", "Value=", ENDITEM, 
		"Name=meetingId", "Value=", ENDITEM, 
		"Name=actionStatus", "Value=InProcess", ENDITEM, 
		"Name=actionId", "Value=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listByAlert_2", 
		"URL=http://10.100.22.24:8181/signal/action/listByAlert?alertId={signalid}&appType=Signal%20Management&_=1580885300912", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	/*web_url("{signalid}_3", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/{signalid}?_=1580885300915", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t328.inf", 
		"Mode=HTTP", 
		LAST);*/

	web_url("list_3", 
		"URL=http://10.100.22.24:8181/signal/meeting/list?alertId={signalid}&appType=Signal%20Management&_=1580885300916", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t329.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	
	lr_end_transaction("createaction",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("Signalsummary_07_NavigateActivityLogTab");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

/*	web_url("{signalid}_4", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/{signalid}?_=1580885300919", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		LAST);*/

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	

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

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_start_transaction("Signalsummary_08_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1580885534175%7C485300797_158%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FvalidatedSignal%2Fdetails%3Fid%3D{signalid}%7CValidated%20Signals%7C1580885340865%7C%7C; DOMAIN=10.100.22.24");

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
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id={signalid}", 
		"Snapshot=t336.inf", 
		"Mode=HTTP", 
		LAST);

/*	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);*/

	lr_end_transaction("Signalsummary_08_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
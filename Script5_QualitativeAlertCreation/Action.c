Action()
{
	
	lr_start_transaction("QualitativeAlert_01_OpenApplication");

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

	web_concurrent_start(NULL);

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t18.inf", 
		LAST);

	

	web_concurrent_end(NULL);
	
	lr_end_transaction("QualitativeAlert_01_OpenApplication", LR_AUTO);


	/* QualitativeAlert_01_OpenApplication */

	

	lr_start_transaction("QualitativeAlert_02_Login");

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


	
	lr_end_transaction("QualitativeAlert_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("dtPC=3$480108795_668h-vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580881929407|1580880082782; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");



	lr_start_transaction("QualitativeAlert_03_NavigateQualitativeAlert");

	web_add_cookie("dtSa=true%7CC%7C-1%7CQualitative%20Configuration%7C-%7C1580880258516%7C480108795_668%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1580880125347%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t303.inf", 
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

	web_reg_find("Text=Qualitative Configuration", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("create", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$480262560_863h1vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=9; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580882062574|1580880082782; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");
	
	web_concurrent_start(NULL);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t305.inf", 
		"Mode=HTTP", 
		LAST);

	//web_add_header("Origin", 
	//	"http://10.100.22.24:8181");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getValuelessOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t311.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

/*	web_add_cookie("rxvt=1580882066479|1580880082782; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$480262560_863h2vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_revert_auto_header("X-Requested-With");*/

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		LAST);
		
web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_add_cookie("rxvt=1580882066542|1580880082782; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

/*	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/198/8ssfe3v9/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);*/

	lr_end_transaction("QualitativeAlert_03_NavigateQualitativeAlert",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("dtPC=3$480262560_863h-vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580882073177|1580880082782; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"{_csrf}");

	web_submit_data("searchViews", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t317.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=penicillin", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_2", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t320.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t321.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t322.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t323.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=-687367064,-1006509822,1641439079", ENDITEM, 
		LAST);

	web_add_cookie("rxvt=1580882148443|1580880082782; DOMAIN=10.100.22.24");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchUserGroupList_2", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?term=bh&max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_start_transaction("QualitativeAlert_04_CreateQualitativeAlert");

	web_add_cookie("dtSa=true%7CC%7C-1%7CSave%20%26%20Run%7C-%7C1580880376615%7C480262560_863%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FsingleCaseAlert%2Fcreate%7CQualitative%20Configuration%7C1580880348444%7C%7C; DOMAIN=10.100.22.24");

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
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t329.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value={OwnerUserID}", ENDITEM, 
		"Name=optradio", "Value=on", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"PENICILLIN G\",\"id\":\"178470882\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM, 
		"Name=studySelection", "Value=", ENDITEM, 
		"Name=JSONExpressionValues", "Value=", ENDITEM, 
		"Name=_limitPrimaryPath", "Value=", ENDITEM, 
		"Name=eventSelection", "Value=", ENDITEM, 
		"Name=dateRangeType", "Value=CASE_RECEIPT_DATE", ENDITEM, 
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM, 
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM, 
		"Name=asOfVersionDateValue", "Value=Invalid date", ENDITEM, 
		"Name=asOfVersionDate", "Value=", ENDITEM, 
		"Name=onOrAfterDate", "Value=", ENDITEM, 
		"Name=_excludeFollowUp", "Value=", ENDITEM, 
		"Name=_includeLockedVersion", "Value=", ENDITEM, 
		"Name=includeLockedVersion", "Value=false", ENDITEM, 
		"Name=_applyAlertStopList", "Value=", ENDITEM, 
		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM, 
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
		"Name=validQueries", "Value=", ENDITEM, 
		"Name=alertTriggerCases", "Value=0", ENDITEM, 
		"Name=alertTriggerDays", "Value=0", ENDITEM, 
		"Name=_seperateAlertForFollowUp", "Value=", ENDITEM, 
		"Name=_unlistedEvents", "Value=", ENDITEM, 
		"Name=_unlistedUnknown", "Value=", ENDITEM, 
		"Name=_event_exactSearch", "Value=", ENDITEM, 
		"Name=_product_exactSearch", "Value=", ENDITEM, 
		"Name=_study_exactSearch", "Value=", ENDITEM, 
		"Name=_study_imp", "Value=", ENDITEM, 
		"Name=delimiter", "Value=none", ENDITEM, 
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
		"Name=name", "Value={Alertname}", ENDITEM, 
		"Name=sharedWith", "Value=User_{OwnerUserID}", ENDITEM, 
		"Name=priority", "Value=6280", ENDITEM, 
		"Name=assignedToValue", "Value=User_{OwnerUserID}", ENDITEM, 
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
		"Name=schedulerTime", "Value={CurrentDate}", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{DAte}T{time}Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
		"Name=repeatExecution", "Value=false", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=signalId", "Value=", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=previousAction", "Value=create", ENDITEM, 
		"Name=_csrf", "Value={_csrf}", ENDITEM, 
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("dtPC=3$480443784_303h1vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1580882243797|1580880082782; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t330.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,bklopemakmnopmghhmccadeonafabnal,jflookgnkcckhobaglndicnbbgbonegd");

	
	web_add_cookie("rxvt=1580882244497|1580880082782; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$480443784_303h2vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");


	web_add_cookie("rxvt=1580882249157|1580880082782; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$480443784_303h-vHCIJITDJJEGWELCBAKOKAKADJFJHOJOR; DOMAIN=10.100.22.24");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("executionStatus", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=SINGLE_CASE_ALERT&_=1580880443939", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

/*	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/929/7g7n4vz0/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);*/

	lr_end_transaction("QualitativeAlert_04_CreateQualitativeAlert",LR_AUTO);

	lr_think_time(3);

	web_add_cookie("rxvt=1580882252917|1580880082782; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_start_transaction("QualitativeAlert_05_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1580880473239%7C480443784_303%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Fconfiguration%2FexecutionStatus%3FalertType%3DSINGLE_5FCASE_5FALERT%7CPV%20Signal%20-%20Execution%20Status%7C1580880449155%7C%7C; DOMAIN=10.100.22.24");

	web_reg_find("Text=Login", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t337.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);

	lr_end_transaction("QualitativeAlert_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
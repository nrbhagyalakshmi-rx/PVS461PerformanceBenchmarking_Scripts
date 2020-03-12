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

/*Correlation comment - Do not change!  Original value='11e02107-8371-492d-8f35-89caa513bb45' Name ='_csrf' Type ='ResponseBased'*/
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
		
		lr_start_transaction("Literature_01_OpenApplication");


	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t103.inf", 
		LAST);

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

	

	web_add_cookie("rxVisitor=1581052348916JAS3UOPKNB68MUOURE5O3JLO9FH5PCGM; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$52348909_958h1vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=-; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=1; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581054149019|1581052348920; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");
	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t106.inf", 
		LAST);

	

	


	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t113.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("Literature_01_OpenApplication", LR_AUTO);


	/* Literature_01_OpenApplication */

	

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/


	lr_start_transaction("Literature_02_Login");

	web_add_cookie("rxvt=1581054154005|1581052348920; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$52348909_958h-vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1581052446847%7C52348909_958%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1581052354003%7C%7C; DOMAIN=10.100.22.24");

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
		"Snapshot=t118.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=_csrf", "Value={_csrf}", ENDITEM,
		"Name=username", "Value=bhagya", ENDITEM,
		"Name=password", "Value=bhagya", ENDITEM,
		LAST);

	web_add_cookie("dtPC=3$52449439_492h1vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581054249452|1581052348920; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t119.inf", 
		LAST);

	//web_add_header("Accept", 
	//	"application/json, text/javascript, */*; q=0.01");

	//web_add_auto_header("X-Requested-With", 
	//	"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	//web_add_header("Origin", 
	//	"http://10.100.22.24:8181");

	//web_add_header("Accept", 
	//	"*/*");

	//web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t121.inf", 
		LAST);

	//web_add_header("Accept", 
	//	"*/*");

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t122.inf", 
		LAST);

	//web_add_header("Origin", 
	//	"http://10.100.22.24:8181");

	//web_add_header("Accept", 
	//	"*/*");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t125.inf", 
		LAST);

	
	

	//web_add_auto_header("Accept", 
	//	"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1581052450632", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1581052450633", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1581052450631", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1581052450636", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Jan-2020", ENDITEM, 
		"Name=end", "Value=09-Mar-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");
	
	web_concurrent_start(NULL);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1581052450635", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1581052450630", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1581052450634", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	//web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	//web_revert_auto_header("Accept");

	//web_add_header("Accept", 
	//	"application/json, text/javascript, */*; q=0.01");

	//web_add_header("X-Requested-With", 
	//	"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1581052450639", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	/*web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/196/k2f6b1wo/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);*/

	//web_add_header("Accept", 
	//	"application/json, text/javascript, */*; q=0.01");

	//web_add_auto_header("X-Requested-With", 
	//	"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1581052450640", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	//web_add_header("Origin", 
	//	"http://10.100.22.24:8181");

	//web_add_header("Accept", 
	//	"*/*");

	//web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t140.inf", 
		LAST);

	//web_add_header("Origin", 
	//	"http://10.100.22.24:8181");

	//web_add_header("Accept", 
	//	"*/*");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t141.inf", 
		LAST);

	

	//web_add_header("Accept", 
	//	"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1581052450638", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	//web_add_cookie("rxvt=1581054258230|1581052348920; DOMAIN=10.100.22.24");

	//web_add_header("Accept", 
	//	"image/webp,image/apng,image/*,*/*;q=0.8");

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t143.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Literature_02_Login",LR_AUTO);

	lr_think_time(3);

	

	lr_start_transaction("QuantitativeAlert_03_NavigateLiteratureAlert");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLiterature%20Configuration%7C-%7C1581052486158%7C52449439_492%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1581052460082%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t146.inf", 
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

	web_reg_find("Text=Literature Configuration", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_concurrent_start(NULL);
	web_url("create", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

/*	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_add_cookie("rxvt=1581054288836|1581052348920; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");*/

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_cookie("dtPC=3$52488912_535h1vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

//	web_add_cookie("dtLatC=10; DOMAIN=10.100.22.24");

//	web_add_cookie("rxvt=1581054288926|1581052348920; DOMAIN=10.100.22.24");
//
//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"http://10.100.22.24:8181");

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	

//	web_add_cookie("rxvt=1581054292367|1581052348920; DOMAIN=10.100.22.24");
//
//	web_add_cookie("dtPC=3$52488912_535h2vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_cookie("rxvt=1581054292421|1581052348920; DOMAIN=10.100.22.24");

//	web_revert_auto_header("Accept");

//	web_add_header("Cache-Control", 
//		"no-cache");

//	web_add_header("Pragma", 
//		"no-cache");

//	web_add_header("Upgrade", 
//		"websocket");

	/*web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/371/ri1yh8d_/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_cookie("dtPC=3$52488912_535h-vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581054298856|1581052348920; DOMAIN=10.100.22.24");*/

	web_concurrent_end(NULL);
	lr_end_transaction("QuantitativeAlert_03_NavigateLiteratureAlert",LR_AUTO);

	lr_think_time(3);

	
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
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=PROPOXYPHENE HYDROCHLORIDE", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={\"filter0\":null,\"filter1\":null,\"filter2\":null,\"filter3\":null,\"filter4\":null,\"filter5\":null,\"filter6\":null,\"filter7\":null}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL=http://10.100.22.24:8181/signal/productDictionary/getSelectedItem?productId=-{productid}&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

/* Added by Async CodeGen.
ID=LongPoll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_0_RequestCB
	LongPoll_0_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=-{productid}", ENDITEM, 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_2",
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create",
		"Snapshot=t160.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=5", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=-{productid}", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_3",
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create",
		"Snapshot=t161.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=4", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=-{productid}", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_4",
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create",
		"Snapshot=t162.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=3", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=-718517626,262581011,2139106508,-375079378,1051911601,-1185720539,1706593481,-184477398,1860759458,2844935,-1428476265", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_5",
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create",
		"Snapshot=t163.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=2", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=1608156302,10554220,433187833,-1527749391,572802278,1979197229,-326473248,424996944,-567604422,1078857419,-1698332393,130994529,-1428476265", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_6",
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create",
		"Snapshot=t164.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=1", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=682326307,-567392665,-505957169,-448311425,1608381911,2068273390,-695518159,-1166366509,1470132245,1221633091,-98732565,875909212,298735262,-651870061,1811470590,405735404,-201299059,-258122414,1499921115,-1525798505,365081393,83159981,614659336,-274178263,1266355756,-2069325133,-868340992,1219667509,489128927,-1628076110,76247994,1528926843,1940888356,-66148126,-2032771374,-361435428,-919549623,-1499175066,1060387974,1018772045,-652754794,-9021658,1796686865,1462281935,-1409631932,491612765,-858452948,-425909467,1127471470,-1380504794,-1942058120,1409146311,-1784433956,-21352477,-152815273,-2026179069,489777511,-687367064,2063505280,-781635860,923004975,-2040736783,-1642990715,-1006509822,2131729537,1786466956,1481040930,159092494,2087582525,422609026,-974120021,2147351679,1641439079,1168775560,-1652392689,1582324007,1023996275,-1165888426,512912021,1244002702,1023996277,1023996278,990597363", ENDITEM,
		LAST); 
	*/

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchUserGroupList_2", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?term=bha&max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_start_transaction("QuantitativeAlert_04_CreateLiteratureAlertAlert");

	web_add_cookie("dtSa=true%7CC%7C-1%7CSave%20%26%20Run%7C-%7C1581052587142%7C52488912_535%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2FliteratureAlert%2Fcreate%7CLiterature%20Configuration%7C1581052494801%7C%7C; DOMAIN=10.100.22.24");

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
		"Action=http://10.100.22.24:8181/signal/literatureAlert/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/create",
		"Snapshot=t169.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=delimiter", "Value=none", ENDITEM,
		"Name=owner", "Value=6979", ENDITEM,
		"Name=optradio", "Value=on", ENDITEM,
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[],\"5\":[],\"6\":[{\"name\":\"PENICILLIN G\",\"id\":\"-{productid}\"}],\"7\":[],\"8\":[],\"9\":[]}", ENDITEM,
		"Name=JSONExpressionValues", "Value=", ENDITEM,
		"Name=eventSelection", "Value=", ENDITEM,
		"Name=searchString", "Value=", ENDITEM,
		"Name=dateRangeEnum", "Value=LAST_WEEK", ENDITEM,
		"Name=dateRangeEnum", "Value=", ENDITEM,
		"Name=relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=startDateAbsoluteCustomFreq", "Value=", ENDITEM,
		"Name=endDateAbsoluteCustomFreq", "Value=", ENDITEM,
		"Name=dateRangeStartAbsolute", "Value=", ENDITEM,
		"Name=dateRangeStart", "Value=null", ENDITEM,
		"Name=dateRangeStart", "Value=", ENDITEM,
		"Name=dateRangeEndAbsolute", "Value=", ENDITEM,
		"Name=dateRangeEnd", "Value=null", ENDITEM,
		"Name=dateRangeEnd", "Value=", ENDITEM,
		"Name=_pubmed", "Value=", ENDITEM,
		"Name=_embase", "Value=", ENDITEM,
		"Name=_event_exactSearch", "Value=", ENDITEM,
		"Name=_product_exactSearch", "Value=", ENDITEM,
		"Name=_study_exactSearch", "Value=", ENDITEM,
		"Name=_study_imp", "Value=", ENDITEM,
		"Name=name", "Value={literaturealertname}", ENDITEM,
		"Name=priority", "Value=6280", ENDITEM,
		"Name=assignedToValue", "Value=User_6979", ENDITEM,
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
		"Name=schedulerTime", "Value={currentdate}", ENDITEM,
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{date}T{time}Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM,
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
		"Name=repeatExecution", "Value=false", ENDITEM,
		"Name=schedulerFrom", "Value=createPage", ENDITEM,
		"Name=previousAction", "Value=create", ENDITEM,
		"Name=_csrf", "Value={_csrf}", ENDITEM,
		LAST);

	web_websocket_close("ID=1", 
		"Code=1000", 
		LAST);

	web_add_cookie("rxvt=1581054390283|1581052348920; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=3$52589105_909h1vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1581054389120|1581052348920; DOMAIN=10.100.22.24");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=LITERATURE_SEARCH_ALERT&_=1581052589211", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

/*	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/878/0nanbu8_/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);*/

	web_add_cookie("dtPC=3$52589105_909h-vFFODADAKNNMJREMWIDIJABPMBVIBBKGM; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581054396249|1581052348920; DOMAIN=10.100.22.24");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");



	lr_end_transaction("QuantitativeAlert_04_CreateLiteratureAlertAlert",LR_AUTO);

	lr_think_time(3);

	
	

	lr_start_transaction("LiteratureAlert_05_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1581052622787%7C52589105_909%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Fconfiguration%2FexecutionStatus%3FalertType%3DLITERATURE_5FSEARCH_5FALERT%7CPV%20Signal%20-%20Execution%20Status%7C1581052592197%7C%7C; DOMAIN=10.100.22.24");

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
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_close("ID=2", 
		"Code=1000", 
		LAST);

	lr_end_transaction("LiteratureAlert_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
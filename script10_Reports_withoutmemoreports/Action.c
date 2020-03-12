Action()
{
	
	lr_start_transaction("SignalReports_01_OpenApplication");


	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:72.0) Gecko/20100101 Firefox/72.0");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
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
		"URL={URL}/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_add_header("Accept-Encoding", 
		"identity");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t273.inf", 
		LAST);

	web_add_header("Accept", 
		"image/webp,*/*");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_url("favicon.ico", 
		"URL={URL}/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t274.inf", 
		LAST);

	web_concurrent_end(NULL);
	lr_end_transaction("SignalReports_01_OpenApplication", LR_AUTO);


	lr_think_time(3);
	/* SignalReports_01_OpenApplication */

	lr_start_transaction("SignalReports_02_Login");

	web_reg_find("Text=Dashboard", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Origin", 
		"{URL}");

	web_submit_data("authenticate", 
		"Action={URL}/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value={_csrf}", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t276.inf", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL={URL}/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t278.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t279.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t280.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1578898777576", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1578898777577", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t283.inf", 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t284.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1578898777580", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("X-CSRF-TOKEN", 
		"{_csrf}");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=30-Dec-2019", ENDITEM, 
		"Name=end", "Value=10-Feb-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1578898777582", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1578898777584", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t290.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/800/s5al7w_5/websocket", 
		"Origin={URL}", 
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
		"URL={URL}/signal/dashboard/signalList?_=1578898777583", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL={URL}/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t293.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1578898777574", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1578898777575", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1578898777578", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1578898777579", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	
	lr_end_transaction("SignalReports_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("SignalReports_03_NavigateToSignalReports");

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Report", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL={URL}/signal/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/913/i1w8t2ho/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_url("polymer-mini.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_end_transaction("SignalReports_03_NavigateToSignalReports",LR_AUTO);

	lr_think_time(3);

	
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("searchViews", 
		"Action={URL}/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t311.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=PENICILLIN G", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=delimiter", "Value=;", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={\"filter0\":null,\"filter1\":null,\"filter2\":null,\"filter3\":null,\"filter4\":null,\"filter5\":null,\"filter6\":null,\"filter7\":null}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL={URL}/signal/productDictionary/getSelectedItem?productId=178470882&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t312.inf", 
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
		"URL={URL}/signal/productDictionary/getPreLevelProductParents", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=178470882", ENDITEM, 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_2",
		"Action={URL}/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/report/index",
		"Snapshot=t314.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=5", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=178470882", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_3",
		"Action={URL}/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/report/index",
		"Snapshot=t315.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=4", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=178470882", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_4",
		"Action={URL}/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/report/index",
		"Snapshot=t316.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=3", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=178470882", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_5",
		"Action={URL}/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/report/index",
		"Snapshot=t317.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=2", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=178470882", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_submit_data("getPreLevelProductParents_6",
		"Action={URL}/signal/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/report/index",
		"Snapshot=t318.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=dataSource", "Value=pva", ENDITEM,
		"Name=dictionaryLevel", "Value=1", ENDITEM,
		"Name=currentLang", "Value=en", ENDITEM,
		"Name=productIds", "Value=-687367064,-1006509822,1641439079", ENDITEM,
		LAST); 
	*/

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_start_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("prepareICSRsReport", 
		"URL={URL}/signal/report/prepareICSRsReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t325.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=ICSR_BY_CASE_CHARACTERISTICS&dataSource=pva&reportName={name}ICSRReport&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_end_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics",LR_AUTO);

	lr_think_time(3);

	
	
	lr_think_time(3);

	lr_start_transaction("SignalReports_10_Logout");

	web_websocket_close("ID=1", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_10_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
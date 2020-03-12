Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:72.0) Gecko/20100101 Firefox/72.0");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("QuantitativeAlert_01_OpenApplication");


/*Correlation comment - Do not change!  Original value='e27eeccd-e24e-4764-b4b5-f835087f4fab' Name ='_csrf' Type ='ResponseBased'*/
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
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"image/webp,*/*");

	web_concurrent_start(NULL);

	web_url("favicon.ico", 
		"URL={URL}/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t174.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t175.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("QuantitativeAlert_01_OpenApplication", LR_AUTO);


	/* QuantitativeAlert_01_OpenApplication */

	lr_start_transaction("QuantitativeAlert_02_Login");

	web_reg_find("Text=Dashboard", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Origin", 
		"{URL}");

	web_submit_data("authenticate",
		"Action={URL}/signal/login/authenticate",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/login/auth",
		"Snapshot=t176.inf",
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
		"Snapshot=t177.inf", 
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
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t179.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t180.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t181.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t182.inf", 
		LAST);

	

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1579445585213", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1579445585212", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t185.inf", 
		LAST);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1579445585216", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	
	
	web_concurrent_end(NULL);

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
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=30-Dec-2019", ENDITEM, 
		"Name=end", "Value=10-Feb-2020", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1579445585218", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1579445585220", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1579445585219", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL={URL}/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t193.inf", 
		LAST);
	
	web_concurrent_end(NULL);

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
		"URI=ws://10.100.22.24:8181/signal/stomp/331/qikinhn0/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	lr_end_transaction("QuantitativeAlert_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_start_transaction("QuantitativeAlert_03_NavigateQuantitativeAlert");

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Quantitative Configuration", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("create", 
		"URL={URL}/signal/aggregateCaseAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);
	web_url("getDateOperators", 
		"URL={URL}/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL={URL}/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL={URL}/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators", 
		"URL={URL}/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);
	
	
//	web_revert_auto_header("X-Requested-With");

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

//	web_add_header("Upgrade", 
// 		"websocket");

/*	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/775/r27aqsn1/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);*/

	web_url("polymer-mini.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");


	
	web_concurrent_end(NULL);

	lr_end_transaction("QuantitativeAlert_03_NavigateQuantitativeAlert",LR_AUTO);

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
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t211.inf", 
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
		"URL={URL}/signal/productDictionary/getSelectedItem?productId=-1088411109&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t213.inf", 
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
	
	web_concurrent_start(NULL);


	web_url("fetchAllowedUsers", 
		"URL={URL}/signal/configurationRest/fetchAllowedUsers?productList=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL={URL}/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchUserGroupList_2", 
		"URL={URL}/signal/user/searchUserGroupList?term=bha&max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_concurrent_end(NULL);


	lr_start_transaction("QuantitativeAlert_04_CreateQuantitativeAlert");

	web_websocket_close("ID=1", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=PV Signal - Execution Status", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("run",
		"Action={URL}/signal/aggregateCaseAlert/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/aggregateCaseAlert/create",
		"Snapshot=t219.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=delimiter", "Value=none", ENDITEM,
		"Name=owner", "Value=8877", ENDITEM,
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
		"Name=name", "Value={Alertname}", ENDITEM,
		"Name=sharedWith", "Value=User_8877", ENDITEM,
		"Name=priority", "Value=6268", ENDITEM,
		"Name=assignedToValue", "Value=User_8877", ENDITEM,
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
		"Name=schedulerTime", "Value={currentdatetime}", ENDITEM,
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{date}T{time}Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM,
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
		"Name=repeatExecution", "Value=false", ENDITEM,
		"Name=editAggregate", "Value=false", ENDITEM,
		"Name=schedulerFrom", "Value=createPage", ENDITEM,
		"Name=blankValuesJSON", "Value=", ENDITEM,
		"Name=previousAction", "Value=create", ENDITEM,
		"Name=signalId", "Value=", ENDITEM,
		"Name=_csrf", "Value={_csrf}", ENDITEM,
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("executionStatus", 
		"URL={URL}/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=AGGREGATE_CASE_ALERT&_=1579445722124", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t223.inf", 
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

	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/181/dnhe2y2m/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_end_transaction("QuantitativeAlert_04_CreateQuantitativeAlert",LR_AUTO);

	lr_think_time(3);

	

	lr_start_transaction("QuantitativeAlert_05_Logout");

	web_websocket_close("ID=2", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Login", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeAlert_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
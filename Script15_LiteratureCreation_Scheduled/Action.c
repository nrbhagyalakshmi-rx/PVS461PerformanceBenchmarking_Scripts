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

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='5ecf1b3d-c73b-40aa-a380-b3ba7129ddb3' Name ='_csrf' Type ='ResponseBased'*/
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
		"URL={URL}/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
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
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("Literature_01_OpenApplication", LR_AUTO);


	/* Literature_01_OpenApplication */

	lr_start_transaction("Literature_02_Login");

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
		"Snapshot=t11.inf",
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

	web_concurrent_start(NULL);

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

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
		"Snapshot=t15.inf", 
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
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t17.inf", 
		LAST);

	

	web_add_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1579453534107", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1579453534108", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t21.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1579453534111", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
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
		"Snapshot=t24.inf", 
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
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1579453534113", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1579453534115", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1579453534114", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	
//	web_revert_auto_header("X-Requested-With");

//	web_add_auto_header("Accept", 
//		"*/*");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

/*	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/787/sy_gr0j5/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);*/

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL={URL}/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t32.inf", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1579453534105", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1579453534106", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1579453534109", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);


	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1579453534110", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);
	
	
web_concurrent_end(NULL);

	lr_end_transaction("Literature_02_Login",LR_AUTO);

	lr_think_time(3);



	lr_start_transaction("QuantitativeAlert_03_NavigateLiteratureAlert");

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Literature Configuration", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	
web_concurrent_start(NULL);

	

	web_url("create", 
		"URL={URL}/signal/literatureAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

/*	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/350/ls8atv3a/websocket", 
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
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

web_concurrent_end(NULL);


	lr_end_transaction("QuantitativeAlert_03_NavigateLiteratureAlert",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("searchEvents", 
		"Action={URL}/signal/eventDictionary/searchEvents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=asthma", ENDITEM, 
		"Name=dictionaryLevel", "Value=4", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedEvent", 
		"URL={URL}/signal/eventDictionary/getSelectedEvent?eventId=10003553&dataSource=pva&dictionaryLevel=4&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelEventParents", 
		"Action={URL}/signal/eventDictionary/getPreLevelEventParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=4", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=eventIds", "Value=10003553", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelEventParents_2", 
		"Action={URL}/signal/eventDictionary/getPreLevelEventParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=eventIds", "Value=10027654,10006484", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelEventParents_3", 
		"Action={URL}/signal/eventDictionary/getPreLevelEventParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=eventIds", "Value=10001708,10006436", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelEventParents_4", 
		"Action={URL}/signal/eventDictionary/getPreLevelEventParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=eventIds", "Value=10021428,10038738", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("searchUserGroupList", 
		"URL={URL}/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchUserGroupList_2", 
		"URL={URL}/signal/user/searchUserGroupList?term=bhagya&max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_start_transaction("QuantitativeAlert_04_CreateLiteratureAlertAlert");

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
		"Action={URL}/signal/literatureAlert/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/literatureAlert/create",
		"Snapshot=t74.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=delimiter", "Value=none", ENDITEM,
		"Name=owner", "Value=8877", ENDITEM,
		"Name=optradio", "Value=on", ENDITEM,
		"Name=productSelection", "Value=", ENDITEM,
		"Name=JSONExpressionValues", "Value=", ENDITEM,
		"Name=eventSelection", "Value={\"1\":[],\"2\":[],\"3\":[],\"4\":[{\"name\":\"Asthma\",\"id\":\"10003553\"}],\"5\":[],\"6\":[]}", ENDITEM,
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
		"Name=priority", "Value=6268", ENDITEM,
		"Name=assignedToValue", "Value=User_8877", ENDITEM,
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

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t77.inf", 
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
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=LITERATURE_SEARCH_ALERT&_=1579453634972", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t79.inf", 
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
		"URI=ws://10.100.22.24:8181/signal/stomp/702/n1qkt8xc/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_end_transaction("QuantitativeAlert_04_CreateLiteratureAlertAlert",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("LiteratureAlert_05_Logout");

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
		"Referer={URL}/signal/configuration/executionStatus?alertType=LITERATURE_SEARCH_ALERT", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("LiteratureAlert_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
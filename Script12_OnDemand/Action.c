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

/*Correlation comment - Do not change!  Original value='5d8750c7-bcdf-4f42-8f9f-bf37c0ec9c55' Name ='_csrf' Type ='ResponseBased'*/
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
		
		lr_start_transaction("OnDemand_01_OpenApplication");


	web_url("signal", 
		"URL={URL}/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
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
		"Snapshot=t2.inf", 
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
		"Snapshot=t3.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("OnDemand_01_OpenApplication", LR_AUTO);


	/* OnDemand_01_OpenApplication */

	lr_start_transaction("OnDemand_02_Login");

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
		"Snapshot=t4.inf",
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
		"Snapshot=t5.inf", 
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
		"Snapshot=t6.inf", 
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
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t10.inf", 
		LAST);

	

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1579489736206", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1579489736207", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1579489736210", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t14.inf", 
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
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=30-Dec-2019", ENDITEM, 
		"Name=end", "Value=10-Feb-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");



	web_revert_auto_header("X-Requested-With");
	
	web_concurrent_start(NULL);

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1579489736212", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1579489736214", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1579489736213", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL={URL}/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t21.inf", 
		LAST);

//	web_revert_auto_header("X-Requested-With");

//	web_add_auto_header("Accept", 
//		"*/*");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

//	web_add_header("Upgrade", 
//		"websocket");

/*	web_websocket_connect("ID=0", 
		"URI=ws://10.100.22.24:8181/signal/stomp/249/fxfczqkl/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);
*/
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1579489736204", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1579489736205", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1579489736208", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1579489736209", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	
	
	web_concurrent_end(NULL);

	lr_end_transaction("OnDemand_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("OnDemand_03_NavigateOnDemandQualitative");

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Qualitative Review", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("adhocReview", 
		"URL={URL}/signal/singleOnDemandAlert/adhocReview", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);

	web_url("priorities", 
		"URL={URL}/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleOnDemandAlert/adhocReview", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL={URL}/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleOnDemandAlert/adhocReview", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleOnDemandAlert/adhocReview", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);
	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listConfig", 
		"URL={URL}/signal/singleOnDemandAlert/listConfig?adhocRun=true&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=description&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=productSelection&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"caseCount&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=newCases&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=closedCaseCount&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D="
		"true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=lastModified&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastExecuted&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=9&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1579490023177", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleOnDemandAlert/adhocReview", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

/*	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/179/w7jnx5zd/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");*/



	lr_end_transaction("OnDemand_03_NavigateOnDemandQualitative",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("OnDemand_04_NavigateOnDemandQuantitative");

	web_websocket_close("ID=1", 
		"Code=1001", 
		LAST);

	web_reg_find("Text=Quantitative Review", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("adhocReview_2", 
		"URL={URL}/signal/aggregateOnDemandAlert/adhocReview", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleOnDemandAlert/adhocReview", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);
	web_url("priorities_2", 
		"URL={URL}/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateOnDemandAlert/adhocReview", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState_2", 
		"URL={URL}/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateOnDemandAlert/adhocReview", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateOnDemandAlert/adhocReview", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");


//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("listConfig_2", 
		"URL={URL}/signal/aggregateOnDemandAlert/listConfig?adhocRun=true&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=description&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=productSelection&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D="
		"pecCount&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedPecCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=dateRagne&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D="
		"true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=lastModified&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastExecuted&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=9&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=7&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1579490062793", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateOnDemandAlert/adhocReview", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
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

/*	web_websocket_connect("ID=2", 
		"URI=ws://10.100.22.24:8181/signal/stomp/859/6_pxef0x/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);*/

	lr_end_transaction("OnDemand_04_NavigateOnDemandQuantitative",LR_AUTO);

	lr_think_time(3);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_start_transaction("OnDemand_05_NavigateOnDemandEVDAS");

	web_websocket_close("ID=2", 
		"Code=1001", 
		LAST);

	web_reg_find("Text=EVDAS Review", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("adhocReview_3", 
		"URL={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateOnDemandAlert/adhocReview", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities_3", 
		"URL={URL}/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState_3", 
		"URL={URL}/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_4", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("listAdhocConfig", 
		"URL={URL}/signal/evdasOnDemandAlert/listAdhocConfig?_=1579490105147", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");



	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=3", 
		"URI=ws://10.100.22.24:8181/signal/stomp/610/8d3iblsq/websocket", 
		"Origin={URL}", 
		"OnOpenCB=OnOpenCB3", 
		"OnMessageCB=OnMessageCB3", 
		"OnErrorCB=OnErrorCB3", 
		"OnCloseCB=OnCloseCB3", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");


	lr_end_transaction("OnDemand_05_NavigateOnDemandEVDAS",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("OnDemand_06_Logout");

	web_websocket_close("ID=3", 
		"Code=1001", 
		LAST);

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
		"Referer={URL}/signal/evdasOnDemandAlert/adhocReview", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OnDemand_06_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
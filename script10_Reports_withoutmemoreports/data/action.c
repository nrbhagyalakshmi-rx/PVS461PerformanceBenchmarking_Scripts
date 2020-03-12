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

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
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
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t273.inf", 
		LAST);

	web_add_header("Accept", 
		"image/webp,*/*");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t274.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* SignalReports_01_OpenApplication */

	lr_start_transaction("SignalReports_02_Login");

	web_reg_find("Text=Dashboard", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t276.inf", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t278.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t279.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t280.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1578898777576", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1578898777577", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t283.inf", 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t284.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1578898777580", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=30-Dec-2019", ENDITEM, 
		"Name=end", "Value=10-Feb-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898777581", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1578898777582", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1578898777584", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
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
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1578898777583", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t293.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1578898777574", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1578898777575", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1578898777578", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1578898777579", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898777585", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_02_Login",LR_AUTO);

	lr_think_time(3);

	web_url("8877_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898777586", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		LAST);

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
		"URL=http://10.100.22.24:8181/signal/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("8877_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825431", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
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
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("8877_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825433", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_03_NavigateToSignalReports",LR_AUTO);

	lr_think_time(3);

	web_url("8877_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825435", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825440", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_submit_data("searchViews", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
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
		"URL=http://10.100.22.24:8181/signal/productDictionary/getSelectedItem?productId=178470882&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t313.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t314.inf", 
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
		"Snapshot=t315.inf", 
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
		"Snapshot=t316.inf", 
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
		"Snapshot=t317.inf", 
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
		"Snapshot=t318.inf", 
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

	web_url("8877_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825442", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825444", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t320.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics");

	web_url("8877_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825445", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825448", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t322.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825449", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t323.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825456", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_custom_request("prepareICSRsReport", 
		"URL=http://10.100.22.24:8181/signal/report/prepareICSRsReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t325.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=ICSR_BY_CASE_CHARACTERISTICS&dataSource=pva&reportName=PerfICSRReport&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825460", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics",LR_AUTO);

	lr_think_time(3);

	web_url("8877_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825461", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825463", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t328.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_05_InitiatePBRERSignalSummaryReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_custom_request("requestReport", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t329.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=PBRER_SIGNAL_SUMMARY&dataSource=pva&reportName=PerfPBRERSignalSummary&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_url("notifications.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/notifications.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t330.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825466", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t331.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_05_InitiatePBRERSignalSummaryReport",LR_AUTO);

	lr_think_time(3);

	web_url("8877_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825467", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_06_InitiateSignalSummaryReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_custom_request("requestReport_2", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t333.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNAL_SUMMARY_REPORT&dataSource=pva&reportName=PerfSignalSummaryReport&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	lr_end_transaction("SignalReports_06_InitiateSignalSummaryReport",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825470", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825471", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t335.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_07_InitiateSignalsByState");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_custom_request("requestReport_3", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t336.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNALS_BY_STATE&dataSource=pva&reportName=PerfSignalsByState&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825474", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t337.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_07_InitiateSignalsByState",LR_AUTO);

	lr_think_time(3);

	web_url("8877_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825475", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t338.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_08_InitiateSignalProductsAction");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_custom_request("requestReport_4", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t339.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNAL_PRODUCT_ACTIONS&dataSource=pva&reportName=PerfSignalProductActions&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	lr_end_transaction("SignalReports_08_InitiateSignalProductsAction",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_23", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825478", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t340.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_24", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825479", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t341.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("SignalReports_09_InitiateMemoReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"b4e3141d-2d87-4fe2-ba07-f7f74f9d1a8f");

	web_custom_request("requestReport_5", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t342.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=MEMO_REPORT&dataSource=pva&reportName=PerfInitiateMemoReport&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_25", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1578898825482", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t343.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_09_InitiateMemoReport",LR_AUTO);

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
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignalReports_10_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
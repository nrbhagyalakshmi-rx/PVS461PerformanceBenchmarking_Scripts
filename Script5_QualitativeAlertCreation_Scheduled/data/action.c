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

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"image/webp,*/*");

	web_concurrent_start(NULL);

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t147.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t148.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* QualitativeAlert_01_OpenApplication */

	lr_start_transaction("QualitativeAlert_02_Login");

	web_reg_find("Text=Dashboard", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=927d23f2-92bc-4cb9-911a-9ca4fdb02510", ENDITEM, 
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
		"Snapshot=t150.inf", 
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
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t152.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t153.inf", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t154.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"*/*");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1579438865334", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/font-woff2;q=1.0,application/font-woff;q=0.9,*/*;q=0.8");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t156.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1579438865335", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1579438865338", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t159.inf", 
		LAST);

	web_url("8877", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438865339", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"927d23f2-92bc-4cb9-911a-9ca4fdb02510");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=30-Dec-2019", ENDITEM, 
		"Name=end", "Value=10-Feb-2020", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1579438865340", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1579438865342", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1579438865341", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t165.inf", 
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
		"URI=ws://10.100.22.24:8181/signal/stomp/161/prr8owc_/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t167.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1579438865332", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1579438865333", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1579438865336", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1579438865337", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438865343", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeAlert_02_Login",LR_AUTO);

	lr_think_time(3);

	web_url("8877_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438865344", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeAlert_03_NavigateQualitativeAlert");

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Qualitative Configuration", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("create", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getDateOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("8877_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438921962", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_websocket_connect("ID=1", 
		"URI=ws://10.100.22.24:8181/signal/stomp/318/zz2vaeg4/websocket", 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("8877_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438921963", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeAlert_03_NavigateQualitativeAlert",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"927d23f2-92bc-4cb9-911a-9ca4fdb02510");

	web_submit_data("searchViews", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=pencillin g", ENDITEM, 
		"Name=dictionaryLevel", "Value=6", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={\"filter0\":null,\"filter1\":null,\"filter2\":null,\"filter3\":null,\"filter4\":null,\"filter5\":null,\"filter6\":null,\"filter7\":null}", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438921964", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN", 
		"927d23f2-92bc-4cb9-911a-9ca4fdb02510");

	web_submit_data("searchViews_2", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=PENICILLIN", ENDITEM, 
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
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t191.inf", 
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
		"Snapshot=t192.inf", 
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
		"Snapshot=t193.inf", 
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
		"Snapshot=t194.inf", 
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
		"Snapshot=t195.inf", 
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
		"Snapshot=t196.inf", 
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

	web_url("8877_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438921965", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438921966", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("queryList", 
		"URL=http://10.100.22.24:8181/signal/query/queryList?dataSource=pva&term=&page=1&max=30", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryList_2", 
		"URL=http://10.100.22.24:8181/signal/query/queryList?dataSource=pva&term=&page=1&max=30", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("templateList", 
		"URL=http://10.100.22.24:8181/signal/template/templateList?dataSource=pva&term=&page=1&max=30", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchUserGroupList_2", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?term=bha&max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579438921967", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeAlert_04_CreateQualitativeAlert");

	web_websocket_close("ID=1", 
		"Code=1001", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=PV Signal - Execution Status", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("run", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/create", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=8877", ENDITEM, 
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
		"Name=name", "Value=Perf_19Jan_1", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-01-19 13:01:57", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-01-19T13:01Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
		"Name=repeatExecution", "Value=false", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=signalId", "Value=", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=previousAction", "Value=create", ENDITEM, 
		"Name=_csrf", "Value=927d23f2-92bc-4cb9-911a-9ca4fdb02510", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579439078935", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("executionStatus", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=SINGLE_CASE_ALERT&_=1579439078936", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t209.inf", 
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
		"URI=ws://10.100.22.24:8181/signal/stomp/898/0zsuqarj/websocket", 
		"Origin=http://10.100.22.24:8181", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("8877_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579439078937", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeAlert_04_CreateQualitativeAlert",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("executionStatus_2", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=2&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=COMPLETED&alertType=SINGLE_CASE_ALERT&_=1579439078938", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_3", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=3&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=SCHEDULED&alertType=SINGLE_CASE_ALERT&_=1579439078939", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_4", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=4&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=SCHEDULED&alertType=AGGREGATE_CASE_ALERT&_=1579439078940", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_5", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=5&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=AGGREGATE_CASE_ALERT&_=1579439078941", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_6", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=6&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=COMPLETED&alertType=AGGREGATE_CASE_ALERT&_=1579439078942", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_7", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=7&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=COMPLETED&alertType=SINGLE_CASE_ALERT&_=1579439078943", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_8", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=8&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=SINGLE_CASE_ALERT&_=1579439078944", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("8877_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579439078945", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579439078946", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8877_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/8877?_=1579439078947", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeAlert_05_Logout");

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
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeAlert_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}
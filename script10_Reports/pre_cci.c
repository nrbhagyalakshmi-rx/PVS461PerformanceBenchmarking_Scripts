# 1 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB1 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB1 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB1 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB1 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2






 
 






# 3 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Login", 
		"LAST");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36");

	lr_start_transaction("SignalReports_01_OpenApplication");

 
	web_reg_save_param_attrib(
		"ParamName=_csrf",
		"TagName=input",
		"Extract=value",
		"Name=_csrf",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		"LAST");

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t345.inf", 
		"Mode=HTTP", 
		"LAST");

	 

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	
	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"*/*");

	web_url("ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"URL=http://10.100.22.24:8181/signal/ruxitagentjs_ICA2SVfqru_10183200114120852.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t348.inf", 
		"LAST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(0);

	
	web_concurrent_end(0);

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");
	web_add_cookie("rxVisitor=1581054427810K6VHARG0AMTHDP64P3OCCGB3I256S3MJ; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=1$54427803_785h1vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=-; DOMAIN=10.100.22.24");

	web_add_cookie("dtLatC=2; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056227863|1581054427814; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_concurrent_start(0);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t354.inf", 
		"LAST");

	

	web_add_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("favicon.ico", 
		"URL=http://10.100.22.24:8181/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t356.inf", 
		"LAST");

	web_concurrent_end(0);
	
	lr_end_transaction("SignalReports_01_OpenApplication", 2);


	 

	

	lr_start_transaction("SignalReports_02_Login");

	web_add_cookie("rxvt=1581056230867|1581054427814; DOMAIN=10.100.22.24");

	web_add_cookie("dtPC=1$54427803_785h-vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLog%20in%7C-%7C1581054529913%7C54427803_785%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Flogin%2Fauth%7CLogin%7C1581054430865%7C%7C; DOMAIN=10.100.22.24");

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Dashboard", 
		"LAST");

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
		"Snapshot=t358.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=_csrf", "Value={_csrf}", "ENDITEM",
		"Name=username", "Value=bhagya", "ENDITEM",
		"Name=password", "Value=bhagya", "ENDITEM",
		"LAST");

	web_add_cookie("dtPC=1$54532359_770h1vMFBDFENEBGUMHKIKCDLHCGEIIMJMUCCC; DOMAIN=10.100.22.24");

	web_add_cookie("rxvt=1581056332372|1581054427814; DOMAIN=10.100.22.24");

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t359.inf", 
		"LAST");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t360.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(0);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t361.inf", 
		"LAST");

	


 
 

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1581054533429", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t363.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1581054533430", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t364.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1581054533428", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t365.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1581054533433", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t366.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1581054533431", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t367.inf", 
		"Mode=HTTP", 
		"LAST");

		web_concurrent_end(0);

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
		"Snapshot=t369.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=start", "Value=27-Jan-2020", "ENDITEM", 
		"Name=end", "Value=09-Mar-2020", "ENDITEM", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");
		
			web_concurrent_start(0);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1581054533427", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t370.inf", 
		"Mode=HTTP", 
		"LAST");

	 

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t371.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1581054533432", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t372.inf", 
		"Mode=HTTP", 
		"LAST");

	 

	 
	 

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1581054533436", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t373.inf", 
		"Mode=HTTP", 
		"LAST");

	 
# 383 "Action.c"

	 
	 

	 
	 

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1581054533437", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t375.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	 
	 

 

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t376.inf", 
		"LAST");

	 
	 

	 
	 

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t377.inf", 
		"LAST");

	 

	 
	 

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1581054533435", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	 
	 

	 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-b3f48b83f9b7c2d3cbf01ec2a4664551.css", 
		"Snapshot=t379.inf", 
		"LAST");

 
 

 
 

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t380.inf", 
		"LAST");

 
 

	web_url("favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"URL=http://10.100.22.24:8181/signal/assets/favicon-2ba00fd40faca3ac3c2e810a7412bceb.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t381.inf", 
		"LAST");

	web_concurrent_end(0);

	

	lr_end_transaction("SignalReports_02_Login",2);

	lr_think_time(3);

	

	lr_start_transaction("SignalReports_03_NavigateToSignalReports");

	web_add_cookie("dtSa=true%7CC%7C-1%7CReporting%7C-%7C1581054567167%7C54532359_770%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2F%7CDashboard%7C1581054542652%7C%7C; DOMAIN=10.100.22.24");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t384.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Report", 
		"LAST");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_concurrent_start(0);

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t385.inf", 
		"Mode=HTTP", 
		"LAST");

	 
# 554 "Action.c"

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t386.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Snapshot=t387.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Snapshot=t388.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		"LAST");

	 
	 

	

 
 

	 
# 620 "Action.c"

 
 

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t392.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("fetchFaersDisabledColumnsIndexes", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchFaersDisabledColumnsIndexes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t393.inf", 
		"Mode=HTTP", 
		"LAST");
	
		web_concurrent_end(0);

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

 
# 689 "Action.c"

 
 

 
 

 








	lr_end_transaction("SignalReports_03_NavigateToSignalReports",2);

	lr_think_time(3);

	web_add_header("Accept", 
		"*/*");


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
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t399.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=contains", "Value=penicillin g", "ENDITEM", 
		"Name=dictionaryLevel", "Value=6", "ENDITEM", 
		"Name=delimiter", "Value=;", "ENDITEM", 
		"Name=ref_level", "Value=", "ENDITEM", 
		"Name=exact_search", "Value=false", "ENDITEM", 
		"Name=imp", "Value=false", "ENDITEM", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=filters", "Value={\"filter0\":null,\"filter1\":null,\"filter2\":null,\"filter3\":null,\"filter4\":null,\"filter5\":null,\"filter6\":null,\"filter7\":null}", "ENDITEM", 
		"LAST");

	web_custom_request("getSelectedItem", 
		"URL=http://10.100.22.24:8181/signal/productDictionary/getSelectedItem?productId=178470882&dataSource=pva&dictionaryLevel=6&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t400.inf", 
		"Mode=HTTP", 
		"EncType=", 
		"LAST");

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t401.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=6", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=178470882", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

 








	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_auto_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_submit_data("getPreLevelProductParents_2", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t403.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=5", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=178470882", "ENDITEM", 
		"LAST");

	web_submit_data("getPreLevelProductParents_3", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t404.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=4", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=178470882", "ENDITEM", 
		"LAST");

	web_submit_data("getPreLevelProductParents_4", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t405.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=3", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=178470882", "ENDITEM", 
		"LAST");

	web_submit_data("getPreLevelProductParents_5", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t406.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=2", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=178470882", "ENDITEM", 
		"LAST");

	web_submit_data("getPreLevelProductParents_6", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t407.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=1", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=-687367064,-1006509822,1641439079", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	
	lr_start_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

 
# 893 "Action.c"

	
	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

 
# 970 "Action.c"

 
 

 
 
 
 
 

 
 

	


	
	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("prepareICSRsReport", 
		"URL=http://10.100.22.24:8181/signal/report/prepareICSRsReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=ICSR_BY_CASE_CHARACTERISTICS&dataSource=pva&reportName={name}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		"LAST");


	lr_end_transaction("SignalReports_04_GenerateICSRsByCaseCharacteristics",2);

	lr_think_time(3);

	
	lr_start_transaction("SignalReports_05_InitiatePBRERSignalSummaryReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("requestReport", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t442.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=PBRER_SIGNAL_SUMMARY&dataSource=pva&reportName=PBRER{name}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		"LAST");

	web_url("notifications.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/notifications.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t443.inf", 
		"LAST");


	

	lr_end_transaction("SignalReports_05_InitiatePBRERSignalSummaryReport",2);

	lr_think_time(3);

	

	
	lr_start_transaction("SignalReports_06_InitiateSignalSummaryReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("requestReport_2", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t448.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNAL_SUMMARY_REPORT&dataSource=pva&reportName=SignalSummary{name}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D="
		"10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+"
		"lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		"LAST");

	

	
	lr_end_transaction("SignalReports_06_InitiateSignalSummaryReport",2);

	lr_think_time(3);

	
	lr_start_transaction("SignalReports_07_InitiateSignalsByState");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("requestReport_3", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t453.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNALS_BY_STATE&dataSource=pva&reportName=SignalsByState{name}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		"LAST");

	

	lr_end_transaction("SignalReports_07_InitiateSignalsByState",2);

	lr_think_time(3);

	
	lr_start_transaction("SignalReports_08_InitiateSignalProductsAction");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("requestReport_4", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t459.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=SIGNAL_PRODUCT_ACTIONS&dataSource=pva&reportName=SignalProductByAction{name}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&"
		"socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D="
		"Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&"
		"socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders"
		"&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		"LAST");



	lr_end_transaction("SignalReports_08_InitiateSignalProductsAction",2);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");


	

	lr_start_transaction("SignalReports_09_InitiateMemoReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN",
		"{_csrf}");

	web_custom_request("requestReport_5", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t466.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%7B%22name%22%3A%22PENICILLIN+G%22%2C%22id%22%3A%22178470882%22%7D%5D%2C%227%22%3A%5B%5D%2C%228%22%3A%5B%5D%2C%229%22%3A%5B%5D%7D&reportType=MEMO_REPORT&dataSource=pva&reportName=memoreports{name}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&"
		"socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+"
		"system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D="
		"Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D"
		"=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&dateRangeType=CUMULATIVE", 
		"LAST");

	

	lr_end_transaction("SignalReports_09_InitiateMemoReport",2);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	

	

	lr_start_transaction("SignalReports_10_Logout");

	web_add_cookie("dtSa=true%7CC%7C-1%7CLogout%7C-%7C1581055589997%7C54569825_468%7Chttp%3A%2F%2F10.100.22.24%3A8181%2Fsignal%2Freport%2Findex%7CReport%7C1581054575297%7C%7C; DOMAIN=10.100.22.24");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Login", 
		"LAST");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t471.inf", 
		"Mode=HTTP", 
		"LAST");

	web_websocket_close("ID=1", 
		"Code=1000", 
		"LAST");

	lr_end_transaction("SignalReports_10_Logout",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\pvs\\pvs461_fdafix\\script10_reports\\\\combined_script10_Reports.c" 2


/*Status Codes for server responses
 * Documented in [MS-ASCMD] Section 2.2.2
 */

/*Common Status Codes [2.2.2.4] */
#define INV_CONTENT	101 /*Invalid Content*/
#define INV_WBXML 	102 /*Invaliad WBXML */
#define INV_XML		103 /*Invalid XML*/
#define INV_DATETIME	104
#define INV_COMB_IDS	105 /*Invalid collection of IDs */
#define INV_IDS		106 /*Contains IDs that cannot be parsed into valid */
#define INV_MIME	107 
#define INV_DEV_ID	108 /*Device ID is either invalid or missing */
#define INV_DEV_TYPE	109 /*Device TYPE is either invalid or mising */
#define SERVER_ERROR	110
#define SERVER_ERR_RT	111 /*Server Error, retry later */
#define AD_ACCESS_DEN	112
#define MB_QUOTA_EX	113 /*Mailbox Quota Exceeded */
#define MB_SERVER_OFF	114 /*Mailbox Server Offline */
#define SEND_QUOTA_EX	115
#define MSG_REC_URESOLV	116 /*Message Recipient Unresolved */
#define MSG_REPLY_NA	117 /*Message Reply Not Allowed */
#define MSG_PREV_SENT	118
#define MSG_NO_REC	119 /*Message Has No Recpient */
#define MAIL_SUB_FAIL	120 /*Mail Submission Failed */
#define MSG_REPLY_FAIL	121 
#define ATTACH_TOO_LG	122
#define USR_NO_MB	123 /*User Has No Mail Box */
#define USR_NO_ANON	124 /*Requests cannot be anonymous*/
#define USR_NO_PRINC	125 /*User Principal Cannout Be Found */
#define USR_DIS_SYNC	126 /*User Disabled For Sync */
#define USR_MB_NO_SYNC	127 /*User on New Mail Box Cannot Sync */
#define USR_LEG_NO_SYNC	128 /*USer on Legacy Mailbox Cannot Sync */
#define DEV_BLOCK_USR	129 /*Device is Blocked for This User */
#define NO_ACCESS	130 /*User is not allowed to perform that request */
#define ACT_DIS		131 /*Account Disabled */
#define SYNC_NO_FOUND	132 /*Sync State Not Found */
#define SYNC_LOCKED	133 /*Sync State Locked */
#define SYNC_CORPT	134 /*Sync State Corrupt */
#define SYNC_EXISTS	135 /*Sync State Already Exists  */
#define SYNC_INV	136 /*Snyc State Invlalid */
#define CMD_NOT_SUP	137 /*Command Not Supported by this server */
#define VER_NOT_SUP	138 /*Commonad not support by protocol version */
#define DEV_PROV_NO_FUL	139 /*Device Not Fully Provisionable */
#define REM_WIPE_REQ	140 /*Remote Wipe Requested */
#define LEG_DEV_POL	141 /*Legacy Device On Strict Policy */
#define DEV_NO_PROV	142 /*Device Not provisioned */
#define POLICY_REFRESH	143 
#define INV_POLICY_KEY	144
#define EXT_DEV_NA	145 /* Externally Managed Devices Not Allowed */
#define NO_REC_CAL	146 /*No Recurrence In Calendar */
#define UN_ITEM_CLASS	147 /*Unexpected Item Class */
#define REM_SERV_NO_SSL	148 /*Remote Server Has No SSL*/
#define INV_STORE_REQ	149 
#define ITEM_NO_FOUND	150
#define TOO_MANY_FOLD	151
#define NO_FOLD_FOUND	152
#define ITEM_LOST_MOVE	153 /*Items Lost After Move */
#define FAIL_MOVE_OP	154 /*Failure In Move Operation */
#define MOVE_CMD_DIS	155 /*Move Command Disallowed For Non Persistant Move Action */
#define MOVE_CMD_INV	156 /*Move Command Invalid Destination Folder */


/*Table for command abbreviations
 * FolderCreate      || FC
 * FolderDelete      || FD
 * FolderSync        || FS
 * FolderUpdate      || FU
 * GetItemEstimate   || GE
 * MeetingResponse   || MR
 * MoveItems         || MI
 * Ping              || PI
 * Provision	     || PR
 * ResolveRecipients || RR
 * Search            || SE
 * Sync              || SY
 * ValidateCert      || VC
*/


/*FolderCreate [2.2.2.1] */
#define FC_SUCCESS	1  /*Global*/
#define FC_EXISTS	2  /*Item; a folder that has this name already exists */
#define FC_PAR_NO_EXIST	5  /*Item; The parent folder does not exist on the server */
#define FC_ERROR	6  /*Global; Server error */
#define FC_TIMEOUT	8  /*Global */
#define FC_INV_SYNCKEY	9  /*Global */
#define FC_MAL_REQ	10 /*Global */
#define FC_CODE_UNKOWN	11 /*Global */

/*FolderSync [2.2.2.2] */
#define FD_SUCCESS	1  /*Global */
#define FD_ERROR	6  /*Global */
#define FD_TIMEOUT	8  /*Global */
#define FD_INV_SYNCKEY	9  /*Global */
#define FD_MAL_REQ	10 /*Global */
#define FD_UNKNOWN_ERR	11 /*Global */
#define FD_CODE_UNKNOWN	12 /*Global */

/*FolderSync [2.2.2.3] */
#define FS_SUCCESS	1  /*Global */
#define FS_ERROR	6  /*Global */
#define FS_TIMEOUT	8  /*Global */
#define FS_INV_SYNCKEY	9  /*Global */
#define FS_MAL_REQ	10 /*Global */
#define FS_UNKNOWN_ERR	11 /*Global */
#define FS_CODE_UNKOWN	12 /*Global */

/*FolderUpdate [2.2.2.4] */
#define FU_SUCCESS	1  /*Global */
#define FU_FOLD_SPECIAL	3  /*Item; Client specified a speceal folder. */
#define FU_NO_FOLD	4  /*Item; Specified folder does not exist */
#define FU_ERROR	6  /*Global */
#define FU_TIMEOUT	8  /*Global */
#define FU_INV_SYNCKEY	9  /*Global */
#define FU_MAL_REQ	10 /*Global */
#define FU_CODE_UNKNOWN	11 /*Global */

/*GetItemEstimate [2.2.2.5] */
#define GE_SUCCESS	1  /*Global */
#define GE_INV_ID	2  /*Item; Collection or one specified collection ID was invalid */
#define GE_NO_SYNC	3  /*Item; Sync State has not been primed */
#define GE_INV_SYNC_KEY	4  /*Global */

/*MeetingResponse [2.2.2.6] */
#define MR_SUCCESS	1  /*Global */
#define MR_INV_MEET	2  /*Item; Invalid meeting */
#define MR_SERV_MB_ERR	3  /*Global; Error on server mailbox */
#define MR_SERV_ERR	4  /*Global; Error on server */

/*MoveItems [2.2.2.7] */
#define MI_INV_ID_SRC   1  /*Item; Invalid Collection ID for source */
#define MI_INV_ID_DST	2  /*Item; Invallid Collection ID for destination */
#define MI_SUCCESS	3  /*Global */
#define MI_SRC_DST_EQ	4  /*Item; source and destination folder are the same */
#define MI_SERV_ERR	5  /*Global */
#define MI_LOCK		7  /*Item; SRC||DST item locked */

/*Ping [2.2.2.8] */
#define PI_HB_EXPIRE	1  /*Global */
#define PI_CHANGE	2  /*Global */
#define PI_MISS_PARAM	3  /*Global; ommited either Folder or interval */
#define PI_SYNTAX_ERR	4  /*Global */
#define PI_HB_INT_ERR	5  /*Global */
#define PI_FOLD_TO_MANY	6  /*Global */
#define PI_SYNC_REQ	7  /*Global */
#define PI_SERVER_ERR	8  /*Global */

/*Provision [2.2.2.9] */
#define PR_SUCCESS	1  /*Policy */
#define PR_PROTO_ERR	2  /*Global */
#define PR_POL_NOT_DEF	2  /*Policy */
#define PR_POL_UNKNOWN	3  /*Policy */
#define PR_SERVER_ERR	3  /*Global */
#define PR_POL_CORRPT	4  /*Policy */
#define PR_POL_KEY_MM	5  /*Policy; Policy Key Mismatch */

/*ResolveRecipients [2.2.2.10 */
#define RR_SUCCESS	1  /*Global */
#define RR_RECIP_AMB	2  /*Item; Recipeint Provied was ambiguous */
#define RR_REC_AMB	3  /*Item; wtf, same as above in doc */
#define RR_NO_MATCH	4  /*Item; recipient does not exist or string was incorrect */
#define RR_PROTO_ERR	5  /*Global */
#define RR_SERVER_ERR	6  /*Global */
#define RR_NO_CERT_FND	7  /*Item; Not certificate found */
#define RR_GLOB_LIMIT	8  /*Item; */
#define RR_CRT_NUM_FAIL	9  /*Item; */

/*Search [2.2.2.11] */
#define SE_SUCCESS	1  /*Global */
#define SE_REQ_INV	2  /*Item; Request was invalid */
#define SE_SERV_ERR	3  /*Global */
#define SE_BAD_LINK	4  /*Global */
#define SE_ACS_DENIED	5  /*Global */
#define SE_NOT_FOUND	6  /*Global */
#define SE_CONN_FAILED	7  /*Global */
#define SE_TOO_COMPLEX	8  /*Global */
#define SE_TIMED_OUT	10 /*Global */
#define SE_FOLD_SYNC	11 /*Global */
#define SE_RANGE_WARN	12 /*Local; Requested range has gone past range */
#define SE_ACS_BLOCKED	13 /*Global */
#define SE_CRED_REQ	14 /*Global */

/*Sync [2.2.2.12] */
#define SY_SUCCESS	1  /*Global */
#define SY_PRT_VER_ERR	2  /*Global */
#define SY_INV_SYNC_KEY	3  /*Global */
#define SY_PROTO_ERR	4  /*Global || Item; Semantic error in the recovery sync */
#define SY_SERVER_ERR	5  /*Global */
#define SY_CLI_SERV_ERR	6  /*Item; Client sent invalid item */
#define SY_CON_OBJ	7  /*Item; */
#define SY_OBJ_NOT_FND	8  /*Item; */
#define SY_NO_SYNC_DISK	9  /*Item; Sync could not be completed, user out of space */
#define SY_NOTIFY_GUID	10 /*Item; <notifyGUID> element caused an error */
#define SY_NO_SYNC_PROV	11 /*Item; Sync could not be completed, device needs provision */
#define SY_FOLD_CHANGE	12 /*Item; Folder hierarchy has changed */
#define SY_NO_SYNC_COL	13 /*Item; Sync could not be completed, Notify collection missing */
#define SY_INV_WAIT_VAL	14 /*Item; <wait> element too large or too small */
#define SY_INV_SYNC	15 /*Item; Too many collection in sync request */
#define SY_RETRY	16 /*Item; Servre caused retriable error */

/*ValidateCert [2.2.2.13] */
#define VC_SUCCESS	1  /*Global */
#define VC_PROTO_ERR	2  /*Global */
#define VC_INV_SIG	3  /*Item; Signature is not valid, cannot be validated */
#define VC_ID_NO_TRUST	4  /*Item; digital ID issued by untrusted source */
#define VC_INV_CHAIN	5  /*Item; Cert chain invalid */
#define VC_ID_NO EMAIL	6  /*Item; Cert not meant for email */
#define VC_ID_INV_EXP	7  /*Item; Cert expired or not yet valid, time-based */
#define VC_ID_DATE_INV	8  /*Item; Cert Chain has certs out of date */ 
#define VC_CERT_INCOR	9  /*Item; Cert has invalid use */
#define VC_FORM_INCOR	10 /*Item; cert is incorrect */
#define VC_CHAIN_INCOR	11 /*Item; A cert in the chain is being used incorrectly */
#define VC_ID_INCOR	12 /*Item; the id is not for the email supplied */
#define VC_ID_REVOKED	13 /*Item; Cert has been revoked */
#define VC_SERV_OFFLINE	14 /*Item; Revocation server is offline */
#define VC_CHAIN_REVOKE	15 /*Item; Certifate in the chain has been revoked */
#define VC_CERT_SIG_INV	16 /*Item; Signature in the cert is invalid */
#define VC_NOT_SER_ERR  17 /*Item; Unknown Server Error */

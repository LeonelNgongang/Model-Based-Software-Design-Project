function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Error [Deg] */
	this.urlHashMap["feedback_control:6"] = "ert_main.c:29&feedback_control.c:59";
	/* <Root>/Gain */
	this.urlHashMap["feedback_control:7"] = "feedback_control.c:58";
	/* <Root>/Saturation */
	this.urlHashMap["feedback_control:8"] = "feedback_control.c:64,76";
	/* <Root>/Command [V] */
	this.urlHashMap["feedback_control:9"] = "ert_main.c:32&feedback_control.c:66,69,72";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "feedback_control"};
	this.sidHashMap["feedback_control"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Error [Deg]"] = {sid: "feedback_control:6"};
	this.sidHashMap["feedback_control:6"] = {rtwname: "<Root>/Error [Deg]"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "feedback_control:7"};
	this.sidHashMap["feedback_control:7"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "feedback_control:8"};
	this.sidHashMap["feedback_control:8"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Command [V]"] = {sid: "feedback_control:9"};
	this.sidHashMap["feedback_control:9"] = {rtwname: "<Root>/Command [V]"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

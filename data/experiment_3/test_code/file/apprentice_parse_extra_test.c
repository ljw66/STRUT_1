void test_parse_extra_up(void);
void test_parse_extra_down(void);


void test_parse_extra_up(void){

	aunit_printf("\n##FUNCTION_START_parse_extra\n");
 }

void test_parse_extra_down(void){
	aunit_printf("\n##FUNCTION_END_parse_extra\n");
 }



void abnormal_parse_extra_case(int index);

void abnormal_parse_extra_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parse_extra_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_entry *me;
	char *line;
	unsigned int llen;
	long int off;
	unsigned int len;
	char *name;
	char *extra;
	int nt;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	struct magic_entry *valueList_4[]={(struct magic_entry *)me_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={3};
	unsigned int listLength_5=1;
	struct magic_set *valueList_6[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_6=1;
	long int valueList_7[]={0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)"abc"};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={0};
	unsigned int listLength_23=1;
	int valueList_24[]={0};
	unsigned int listLength_24=1;
	struct magic *valueList_25[]={(struct magic *)&struct_magic1};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	unsigned short int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned short int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned short int valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned short int valueList_31[]={0};
	unsigned int listLength_31=1;
	int valueList_32[]={0};
	unsigned int listLength_32=1;
	unsigned short int valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned int valueList_36[]={0};
	unsigned int listLength_36=1;
	unsigned short int valueList_37[]={0};
	unsigned int listLength_37=1;
	char *valueList_38[]={(char *)0};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={0};
	unsigned int listLength_39=1;
	int valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned int valueList_41[]={0};
	unsigned int listLength_41=1;
	unsigned int valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned short int valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned short int valueList_44[]={0};
	unsigned int listLength_44=1;
	unsigned int valueList_45[]={0};
	unsigned int listLength_45=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	goodchar_call_counter = 0;
	file_magwarn_call_counter = 0;
	parse_ext_call_counter = 0;
	isspace_call_counter = 0;
	file_magerror_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parse_extra_1,false,0\n");
	aunit_printf("#CASE_START_test_parse_extra_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			line=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nt=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			extra=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			me=(struct magic_entry *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			llen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ms=(struct magic_set *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			off=(long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			name=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_magic1.vallen=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			struct_magic1.lineno=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			struct_magic1.cond=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			struct_magic1.in_type=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			struct_magic1.mask_op=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			struct_magic1.cont_level=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			struct_magic1.flag=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			struct_magic1.factor=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			struct_magic1.type=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			struct_magic1.in_offset=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			struct_magic1.reln=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			struct_magic1.in_op=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			struct_magic1.factor_op=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			struct_magic1.offset=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).event_flags=(int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(me_PTRTO[0]).mp=(struct magic *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(ms_PTRTO[0]).file=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ms_PTRTO[0]).line=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(ms_PTRTO[0]).flags=(int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(me_PTRTO[0]).cont_count=(unsigned int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(ms_PTRTO[0]).error=(int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(me_PTRTO[0]).max_count=(unsigned int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		returnValue = parse_extra(ms,me,line,llen,off,len,name,extra,nt);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("parse_extra","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("goodchar","goodchar_call_counter",goodchar_call_counter)
	OB_INT_EXPR("file_magwarn","file_magwarn_call_counter",file_magwarn_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_parse_extra_1\n");
}

void test_parse_extra_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_entry *me;
	char *line;
	unsigned int llen;
	long int off;
	unsigned int len;
	char *name;
	char *extra;
	int nt;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	struct magic_entry *valueList_4[]={(struct magic_entry *)me_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={3};
	unsigned int listLength_5=1;
	struct magic_set *valueList_6[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_6=1;
	long int valueList_7[]={0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)"abc"};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={0};
	unsigned int listLength_23=1;
	int valueList_24[]={0};
	unsigned int listLength_24=1;
	struct magic *valueList_25[]={(struct magic *)&struct_magic1};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	unsigned short int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned short int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned short int valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned short int valueList_31[]={0};
	unsigned int listLength_31=1;
	int valueList_32[]={0};
	unsigned int listLength_32=1;
	unsigned short int valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned int valueList_36[]={0};
	unsigned int listLength_36=1;
	unsigned short int valueList_37[]={0};
	unsigned int listLength_37=1;
	char *valueList_38[]={(char *)0};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={0};
	unsigned int listLength_39=1;
	int valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned int valueList_41[]={0};
	unsigned int listLength_41=1;
	unsigned int valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned short int valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned short int valueList_44[]={0};
	unsigned int listLength_44=1;
	unsigned int valueList_45[]={0};
	unsigned int listLength_45=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	goodchar_call_counter = 0;
	file_magwarn_call_counter = 0;
	parse_ext_call_counter = 0;
	isspace_call_counter = 0;
	file_magerror_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parse_extra_2,false,0\n");
	aunit_printf("#CASE_START_test_parse_extra_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			line=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nt=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			extra=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			me=(struct magic_entry *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			llen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ms=(struct magic_set *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			off=(long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			name=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_magic1.vallen=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			struct_magic1.lineno=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			struct_magic1.cond=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			struct_magic1.in_type=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			struct_magic1.mask_op=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			struct_magic1.cont_level=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			struct_magic1.flag=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			struct_magic1.factor=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			struct_magic1.type=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			struct_magic1.in_offset=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			struct_magic1.reln=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			struct_magic1.in_op=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			struct_magic1.factor_op=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			struct_magic1.offset=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).event_flags=(int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(me_PTRTO[0]).mp=(struct magic *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(ms_PTRTO[0]).file=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ms_PTRTO[0]).line=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(ms_PTRTO[0]).flags=(int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(me_PTRTO[0]).cont_count=(unsigned int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(ms_PTRTO[0]).error=(int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(me_PTRTO[0]).max_count=(unsigned int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		returnValue = parse_extra(ms,me,line,llen,off,len,name,extra,nt);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("parse_extra","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("goodchar","goodchar_call_counter",goodchar_call_counter)
	OB_INT_EXPR("file_magwarn","file_magwarn_call_counter",file_magwarn_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_parse_extra_2\n");
}

void test_parse_extra_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_entry *me;
	char *line;
	unsigned int llen;
	long int off;
	unsigned int len;
	char *name;
	char *extra;
	int nt;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	struct magic_entry *valueList_4[]={(struct magic_entry *)me_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={3};
	unsigned int listLength_5=1;
	struct magic_set *valueList_6[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_6=1;
	long int valueList_7[]={0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)"abc"};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={0};
	unsigned int listLength_23=1;
	int valueList_24[]={0};
	unsigned int listLength_24=1;
	struct magic *valueList_25[]={(struct magic *)&struct_magic1};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	unsigned short int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned short int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned short int valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned short int valueList_31[]={0};
	unsigned int listLength_31=1;
	int valueList_32[]={0};
	unsigned int listLength_32=1;
	unsigned short int valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned int valueList_36[]={0};
	unsigned int listLength_36=1;
	unsigned short int valueList_37[]={0};
	unsigned int listLength_37=1;
	char *valueList_38[]={(char *)0};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={0};
	unsigned int listLength_39=1;
	int valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned int valueList_41[]={0};
	unsigned int listLength_41=1;
	unsigned int valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned short int valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned short int valueList_44[]={0};
	unsigned int listLength_44=1;
	unsigned int valueList_45[]={0};
	unsigned int listLength_45=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	goodchar_call_counter = 0;
	file_magwarn_call_counter = 0;
	parse_ext_call_counter = 0;
	isspace_call_counter = 0;
	file_magerror_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parse_extra_3,false,0\n");
	aunit_printf("#CASE_START_test_parse_extra_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			line=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nt=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			extra=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			me=(struct magic_entry *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			llen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ms=(struct magic_set *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			off=(long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			name=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_magic1.vallen=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			struct_magic1.lineno=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			struct_magic1.cond=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			struct_magic1.in_type=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			struct_magic1.mask_op=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			struct_magic1.cont_level=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			struct_magic1.flag=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			struct_magic1.factor=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			struct_magic1.type=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			struct_magic1.in_offset=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			struct_magic1.reln=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			struct_magic1.in_op=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			struct_magic1.factor_op=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			struct_magic1.offset=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).event_flags=(int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(me_PTRTO[0]).mp=(struct magic *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(ms_PTRTO[0]).file=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ms_PTRTO[0]).line=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(ms_PTRTO[0]).flags=(int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(me_PTRTO[0]).cont_count=(unsigned int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(ms_PTRTO[0]).error=(int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(me_PTRTO[0]).max_count=(unsigned int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		returnValue = parse_extra(ms,me,line,llen,off,len,name,extra,nt);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("parse_extra","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("goodchar","goodchar_call_counter",goodchar_call_counter)
	OB_INT_EXPR("file_magwarn","file_magwarn_call_counter",file_magwarn_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_parse_extra_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_parse_extra_up();

	switch(caseIndex){
	case 1:
		test_parse_extra_1();
		break;
	case 2:
		test_parse_extra_2();
		break;
	case 3:
		test_parse_extra_3();
		break;
	default:
		abnormal_parse_extra_case(caseIndex);
		break;
	}

	test_parse_extra_down();
}


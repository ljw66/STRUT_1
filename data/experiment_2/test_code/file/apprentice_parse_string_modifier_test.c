void test_parse_string_modifier_up(void);
void test_parse_string_modifier_down(void);


void test_parse_string_modifier_up(void){

	aunit_printf("\n##FUNCTION_START_parse_string_modifier\n");
 }

void test_parse_string_modifier_down(void){
	aunit_printf("\n##FUNCTION_END_parse_string_modifier\n");
 }



void abnormal_parse_string_modifier_case(int index);

void abnormal_parse_string_modifier_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parse_string_modifier_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	char **lp;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={64};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"9"};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={2};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	string_modifier_check_call_counter = 0;
	parse_strength_call_counter = 0;
	file_magwarn_call_counter = 0;
	parse_ext_call_counter = 0;
	isspace_call_counter = 0;
	strtoul_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parse_string_modifier_7,false,0\n");
	aunit_printf("#CASE_START_test_parse_string_modifier_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			returnValue=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).flags=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			*lp=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(m_PTRTO[0])._u._s._flags=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = parse_string_modifier(ms,m,lp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("parse_string_modifier","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("parse_string_modifier","m->_u._s._count",9,m->_u._s._count)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("string_modifier_check","string_modifier_check_call_counter",string_modifier_check_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("file_magwarn","file_magwarn_call_counter",file_magwarn_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("strtoul","strtoul_call_counter",strtoul_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_parse_string_modifier_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_parse_string_modifier_up();

	switch(caseIndex){
	case 7:
		test_parse_string_modifier_7();
		break;
	default:
		abnormal_parse_string_modifier_case(caseIndex);
		break;
	}

	test_parse_string_modifier_down();
}


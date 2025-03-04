void test_file_vprintf_up(void);
void test_file_vprintf_down(void);


void test_file_vprintf_up(void){

	aunit_printf("\n##FUNCTION_START_file_vprintf\n");
 }

void test_file_vprintf_down(void){
	aunit_printf("\n##FUNCTION_END_file_vprintf\n");
 }



void abnormal_file_vprintf_case(int index);

void abnormal_file_vprintf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_vprintf_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	vasprintf_call_counter = 0;
	free_call_counter = 0;
	asprintf_call_counter = 0;
	file_checkfmt_call_counter = 0;
	file_clearbuf_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_vprintf_8,false,0\n");
	aunit_printf("#CASE_START_test_file_vprintf_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fmt=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ms_PTRTO[0]).event_flags=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_vprintf(ms,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_vprintf","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("vasprintf","vasprintf_call_counter",vasprintf_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("asprintf","asprintf_call_counter",asprintf_call_counter)
	OB_INT_EXPR("file_checkfmt","file_checkfmt_call_counter",file_checkfmt_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_vprintf_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_vprintf_up();

	switch(caseIndex){
	case 8:
		test_file_vprintf_8();
		break;
	default:
		abnormal_file_vprintf_case(caseIndex);
		break;
	}

	test_file_vprintf_down();
}


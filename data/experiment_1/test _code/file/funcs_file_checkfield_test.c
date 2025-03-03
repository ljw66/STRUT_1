void test_file_checkfield_up(void);
void test_file_checkfield_down(void);


void test_file_checkfield_up(void){

	aunit_printf("\n##FUNCTION_START_file_checkfield\n");
 }

void test_file_checkfield_down(void){
	aunit_printf("\n##FUNCTION_END_file_checkfield\n");
 }



void abnormal_file_checkfield_case(int index);

void abnormal_file_checkfield_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_checkfield_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *msg;
	unsigned int mlen;
	char *what;
	char **pp;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"field_name"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"1500"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	isdigit_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_checkfield_8,false,0\n");
	aunit_printf("#CASE_START_test_file_checkfield_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			what=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*pp=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_checkfield(msg,mlen,what,pp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_checkfield","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_file_checkfield_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_checkfield_up();

	switch(caseIndex){
	case 8:
		test_file_checkfield_8();
		break;
	default:
		abnormal_file_checkfield_case(caseIndex);
		break;
	}

	test_file_checkfield_down();
}


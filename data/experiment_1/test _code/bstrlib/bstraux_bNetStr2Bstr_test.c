void test_bNetStr2Bstr_up(void);
void test_bNetStr2Bstr_down(void);


void test_bNetStr2Bstr_up(void){

	aunit_printf("\n##FUNCTION_START_bNetStr2Bstr\n");
 }

void test_bNetStr2Bstr_down(void){
	aunit_printf("\n##FUNCTION_END_bNetStr2Bstr\n");
 }



void abnormal_bNetStr2Bstr_case(int index);

void abnormal_bNetStr2Bstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bNetStr2Bstr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buff;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"3:abc,"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	memcpy_call_counter = 0;
	balloc_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bNetStr2Bstr_5,false,0\n");
	aunit_printf("#CASE_START_test_bNetStr2Bstr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buff=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = bNetStr2Bstr(buff);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bNetStr2Bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bNetStr2Bstr_5\n");
}

void test_bNetStr2Bstr_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buff;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"3:abc,"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	memcpy_call_counter = 0;
	balloc_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bNetStr2Bstr_6,false,0\n");
	aunit_printf("#CASE_START_test_bNetStr2Bstr_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buff=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = bNetStr2Bstr(buff);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bNetStr2Bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bNetStr2Bstr_6\n");
}

void test_bNetStr2Bstr_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buff;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"3:abc,"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	memcpy_call_counter = 0;
	balloc_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bNetStr2Bstr_7,false,0\n");
	aunit_printf("#CASE_START_test_bNetStr2Bstr_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buff=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = bNetStr2Bstr(buff);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bNetStr2Bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bNetStr2Bstr_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_bNetStr2Bstr_up();

	switch(caseIndex){
	case 5:
		test_bNetStr2Bstr_5();
		break;
	case 6:
		test_bNetStr2Bstr_6();
		break;
	case 7:
		test_bNetStr2Bstr_7();
		break;
	default:
		abnormal_bNetStr2Bstr_case(caseIndex);
		break;
	}

	test_bNetStr2Bstr_down();
}


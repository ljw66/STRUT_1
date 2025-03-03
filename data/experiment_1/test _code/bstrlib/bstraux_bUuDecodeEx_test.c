void test_bUuDecodeEx_up(void);
void test_bUuDecodeEx_down(void);


void test_bUuDecodeEx_up(void){

	aunit_printf("\n##FUNCTION_START_bUuDecodeEx\n");
 }

void test_bUuDecodeEx_down(void){
	aunit_printf("\n##FUNCTION_END_bUuDecodeEx\n");
 }



void abnormal_bUuDecodeEx_case(int index);

void abnormal_bUuDecodeEx_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bUuDecodeEx_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	bsUuDecode_call_counter = 0;
	bsclose_call_counter = 0;
	bfromcstralloc_call_counter = 0;
	bsread_call_counter = 0;
	bsFromBstrRef_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuDecodeEx_1,false,0\n");
	aunit_printf("#CASE_START_test_bUuDecodeEx_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			badlines_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = bUuDecodeEx(src,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bUuDecodeEx","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bsUuDecode","bsUuDecode_call_counter",bsUuDecode_call_counter)
	OB_INT_EXPR("bsclose","bsclose_call_counter",bsclose_call_counter)
	OB_INT_EXPR("bfromcstralloc","bfromcstralloc_call_counter",bfromcstralloc_call_counter)
	OB_INT_EXPR("bsread","bsread_call_counter",bsread_call_counter)
	OB_INT_EXPR("bsFromBstrRef","bsFromBstrRef_call_counter",bsFromBstrRef_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bUuDecodeEx_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_bUuDecodeEx_up();

	switch(caseIndex){
	case 1:
		test_bUuDecodeEx_1();
		break;
	default:
		abnormal_bUuDecodeEx_case(caseIndex);
		break;
	}

	test_bUuDecodeEx_down();
}


void test_ksa_bwt_up(void);
void test_ksa_bwt_down(void);


void test_ksa_bwt_up(void){

	aunit_printf("\n##FUNCTION_START_ksa_bwt\n");
 }

void test_ksa_bwt_down(void){
	aunit_printf("\n##FUNCTION_END_ksa_bwt\n");
 }



void abnormal_ksa_bwt_case(int index);

void abnormal_ksa_bwt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksa_bwt_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *T;
	int n;
	int k;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={256};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;
	ksa_sa_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksa_bwt_6,false,0\n");
	aunit_printf("#CASE_START_test_ksa_bwt_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			T=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			k=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ksa_bwt(T,n,k);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ksa_bwt","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("ksa_bwt","T","\u0000\u0000\u0000",T)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksa_sa","ksa_sa_call_counter",ksa_sa_call_counter)

	aunit_printf("#CASE_END_test_ksa_bwt_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksa_bwt_up();

	switch(caseIndex){
	case 6:
		test_ksa_bwt_6();
		break;
	default:
		abnormal_ksa_bwt_case(caseIndex);
		break;
	}

	test_ksa_bwt_down();
}


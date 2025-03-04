void test_ksa_core_up(void);
void test_ksa_core_down(void);


void test_ksa_core_up(void){

	aunit_printf("\n##FUNCTION_START_ksa_core\n");
 }

void test_ksa_core_down(void){
	aunit_printf("\n##FUNCTION_END_ksa_core\n");
 }



void abnormal_ksa_core_case(int index);

void abnormal_ksa_core_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksa_core_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *T;
	saint_t *SA;
	int fs;
	int n;
	int k;
	int cs;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	saint_t *valueList_4[]={(saint_t *)SA_PTRTO};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	getCounts_call_counter = 0;
	induceSA_call_counter = 0;
	free_call_counter = 0;
	getBuckets_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksa_core_4,false,0\n");
	aunit_printf("#CASE_START_test_ksa_core_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cs=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			k=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fs=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			SA=(saint_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			SA_PTRTO[0]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ksa_core(T,SA,fs,n,k,cs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ksa_core","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("getCounts","getCounts_call_counter",getCounts_call_counter)
	OB_INT_EXPR("induceSA","induceSA_call_counter",induceSA_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("getBuckets","getBuckets_call_counter",getBuckets_call_counter)

	aunit_printf("#CASE_END_test_ksa_core_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksa_core_up();

	switch(caseIndex){
	case 4:
		test_ksa_core_4();
		break;
	default:
		abnormal_ksa_core_case(caseIndex);
		break;
	}

	test_ksa_core_down();
}


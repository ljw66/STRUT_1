void test_iappend_up(void);
void test_iappend_down(void);


void test_iappend_up(void){

	aunit_printf("\n##FUNCTION_START_iappend\n");
 }

void test_iappend_down(void){
	aunit_printf("\n##FUNCTION_END_iappend\n");
 }



void abnormal_iappend_case(int index);

void abnormal_iappend_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_iappend_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int inum;
	void *xp;
	int n;


	//值序列相关
	unsigned int valueList_0[]={600};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={6};
	unsigned int listLength_1=1;
	int valueList_2[]={2048};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	bcopy_call_counter = 0;
	abort_call_counter = 0;
	wsect_call_counter = 0;
	winode_call_counter = 0;
	rsect_call_counter = 0;
	rinode_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iappend_6,false,0\n");
	aunit_printf("#CASE_START_test_iappend_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeblock=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		iappend(inum,xp,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("iappend","freeblock",602,freeblock)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcopy","bcopy_call_counter",bcopy_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)
	OB_INT_EXPR("rinode","rinode_call_counter",rinode_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_iappend_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_iappend_up();

	switch(caseIndex){
	case 6:
		test_iappend_6();
		break;
	default:
		abnormal_iappend_case(caseIndex);
		break;
	}

	test_iappend_down();
}


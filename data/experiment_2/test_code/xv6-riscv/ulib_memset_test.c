void test_memset_up(void);
void test_memset_down(void);


void test_memset_up(void){

	aunit_printf("\n##FUNCTION_START_memset\n");
 }

void test_memset_down(void){
	aunit_printf("\n##FUNCTION_END_memset\n");
 }



void abnormal_memset_case(int index);

void abnormal_memset_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_memset_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *dst;
	int c;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//值序列相关
	int valueList_0[]={65};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x12345678};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_memset_2,false,0\n");
	aunit_printf("#CASE_START_test_memset_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dst=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = memset(dst,c,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("memset","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("memset","dst[4]",65,dst[4])
	TEST_ASSERT_EQUAL_INT("memset","dst[0]",65,dst[0])
	TEST_ASSERT_EQUAL_INT("memset","dst[1]",65,dst[1])
	TEST_ASSERT_EQUAL_INT("memset","dst[2]",65,dst[2])
	TEST_ASSERT_EQUAL_INT("memset","dst[3]",65,dst[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_memset_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_memset_up();

	switch(caseIndex){
	case 2:
		test_memset_2();
		break;
	default:
		abnormal_memset_case(caseIndex);
		break;
	}

	test_memset_down();
}


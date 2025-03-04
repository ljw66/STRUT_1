void test_kmalloc_up(void);
void test_kmalloc_down(void);


void test_kmalloc_up(void){

	aunit_printf("\n##FUNCTION_START_kmalloc\n");
 }

void test_kmalloc_down(void){
	aunit_printf("\n##FUNCTION_END_kmalloc\n");
 }



void abnormal_kmalloc_case(int index);

void abnormal_kmalloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kmalloc_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *_km;
	unsigned int n_bytes;

	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)123456};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={400};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	morecore_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmalloc_9,false,0\n");
	aunit_printf("#CASE_START_test_kmalloc_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n_bytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kmalloc(_km,n_bytes);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("kmalloc","returnValue",123460,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("morecore","morecore_call_counter",morecore_call_counter)

	aunit_printf("#CASE_END_test_kmalloc_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_kmalloc_up();

	switch(caseIndex){
	case 9:
		test_kmalloc_9();
		break;
	default:
		abnormal_kmalloc_case(caseIndex);
		break;
	}

	test_kmalloc_down();
}


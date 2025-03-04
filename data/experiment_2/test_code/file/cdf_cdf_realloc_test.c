void test_cdf_realloc_up(void);
void test_cdf_realloc_down(void);


void test_cdf_realloc_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_realloc\n");
 }

void test_cdf_realloc_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_realloc\n");
 }



void abnormal_cdf_realloc_case(int index);

void abnormal_cdf_realloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_realloc_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *file;
	unsigned int line;
	void *p;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"testfile.c"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={64};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_realloc_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_realloc_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			file=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			line=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_realloc(file,line,p,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("cdf_realloc","returnValue","0x3000",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_realloc_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_realloc_up();

	switch(caseIndex){
	case 2:
		test_cdf_realloc_2();
		break;
	default:
		abnormal_cdf_realloc_case(caseIndex);
		break;
	}

	test_cdf_realloc_down();
}


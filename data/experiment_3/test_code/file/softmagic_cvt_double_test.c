void test_cvt_double_up(void);
void test_cvt_double_down(void);


void test_cvt_double_up(void){

	aunit_printf("\n##FUNCTION_START_cvt_double\n");
 }

void test_cvt_double_down(void){
	aunit_printf("\n##FUNCTION_END_cvt_double\n");
 }



void abnormal_cvt_double_case(int index);

void abnormal_cvt_double_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cvt_double_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	union VALUETYPE *p;
	struct magic *m;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	union VALUETYPE *valueList_0[]={(union VALUETYPE *)p_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={5};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={2};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cvt_double_9,false,0\n");
	aunit_printf("#CASE_START_test_cvt_double_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(union VALUETYPE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(m_PTRTO[0]).mask_op=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0])._u._mask=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cvt_double(p,m);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cvt_double","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cvt_double_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_cvt_double_up();

	switch(caseIndex){
	case 9:
		test_cvt_double_9();
		break;
	default:
		abnormal_cvt_double_case(caseIndex);
		break;
	}

	test_cvt_double_down();
}


void test_ksplit_core_up(void);
void test_ksplit_core_down(void);


void test_ksplit_core_up(void){

	aunit_printf("\n##FUNCTION_START_ksplit_core\n");
 }

void test_ksplit_core_down(void){
	aunit_printf("\n##FUNCTION_END_ksplit_core\n");
 }



void abnormal_ksplit_core_case(int index);

void abnormal_ksplit_core_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksplit_core_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s;
	int delimiter;
	int *_max;
	int **_offsets;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"a b c"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)_max_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ksplit_core_9,false,0\n");
	aunit_printf("#CASE_START_test_ksplit_core_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			delimiter=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			_max=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_max_PTRTO[1]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_max_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ksplit_core(s,delimiter,_max,_offsets);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ksplit_core","returnValue",3,returnValue)
	TEST_ASSERT_EQUAL_INT("ksplit_core","_max[0]",2,_max[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ksplit_core_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksplit_core_up();

	switch(caseIndex){
	case 9:
		test_ksplit_core_9();
		break;
	default:
		abnormal_ksplit_core_case(caseIndex);
		break;
	}

	test_ksplit_core_down();
}


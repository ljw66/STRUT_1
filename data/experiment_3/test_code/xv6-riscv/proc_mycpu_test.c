void test_mycpu_up(void);
void test_mycpu_down(void);


void test_mycpu_up(void){

	aunit_printf("\n##FUNCTION_START_mycpu\n");
 }

void test_mycpu_down(void){
	aunit_printf("\n##FUNCTION_END_mycpu\n");
 }



void abnormal_mycpu_case(int index);

void abnormal_mycpu_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mycpu_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_2,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cpus[1].noff=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cpus[1].intena=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_mycpu_up();

	switch(caseIndex){
	case 2:
		test_mycpu_2();
		break;
	default:
		abnormal_mycpu_case(caseIndex);
		break;
	}

	test_mycpu_down();
}


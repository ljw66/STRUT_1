void test_proc_freepagetable_up(void);
void test_proc_freepagetable_down(void);


void test_proc_freepagetable_up(void){

	aunit_printf("\n##FUNCTION_START_proc_freepagetable\n");
 }

void test_proc_freepagetable_down(void){
	aunit_printf("\n##FUNCTION_END_proc_freepagetable\n");
 }



void abnormal_proc_freepagetable_case(int index);

void abnormal_proc_freepagetable_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_proc_freepagetable_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64 *pagetable;
	unsigned long int sz;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)pagetable_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={4096};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	uvmunmap_call_counter = 0;
	uvmfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_proc_freepagetable_1,false,0\n");
	aunit_printf("#CASE_START_test_proc_freepagetable_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pagetable=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sz=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			pagetable_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			pagetable_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		proc_freepagetable(pagetable,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uvmunmap","uvmunmap_call_counter",uvmunmap_call_counter)
	OB_INT_EXPR("uvmfree","uvmfree_call_counter",uvmfree_call_counter)

	aunit_printf("#CASE_END_test_proc_freepagetable_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_proc_freepagetable_up();

	switch(caseIndex){
	case 1:
		test_proc_freepagetable_1();
		break;
	default:
		abnormal_proc_freepagetable_case(caseIndex);
		break;
	}

	test_proc_freepagetable_down();
}


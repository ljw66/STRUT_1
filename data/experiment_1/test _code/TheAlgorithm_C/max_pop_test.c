void test_pop_up(void);
void test_pop_down(void);


void test_pop_up(void){

	aunit_printf("\n##FUNCTION_START_pop\n");
 }

void test_pop_down(void){
	aunit_printf("\n##FUNCTION_END_pop\n");
 }



void abnormal_pop_case(int index);

void abnormal_pop_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_pop_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Heap *heap;


	//值序列相关
	Heap *valueList_0[]={(Heap *)heap_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={70};
	unsigned int listLength_1=1;
	int valueList_2[]={50};
	unsigned int listLength_2=1;
	int valueList_3[]={60};
	unsigned int listLength_3=1;
	int valueList_4[]={40};
	unsigned int listLength_4=1;
	int valueList_5[]={16};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)heap_PTRTO_1_p_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)heap_PTRTO_0_p_PTRTO};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	down_heapify_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_pop_5,false,0\n");
	aunit_printf("#CASE_START_test_pop_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			heap=(Heap *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			heap_PTRTO_0_p_PTRTO[3]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			heap_PTRTO_0_p_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			heap_PTRTO_0_p_PTRTO[2]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			heap_PTRTO_0_p_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(heap_PTRTO[0]).size=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(heap_PTRTO[0]).count=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(heap_PTRTO[1]).p=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(heap_PTRTO[0]).p=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		pop(heap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("down_heapify","down_heapify_call_counter",down_heapify_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_pop_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_pop_up();

	switch(caseIndex){
	case 5:
		test_pop_5();
		break;
	default:
		abnormal_pop_case(caseIndex);
		break;
	}

	test_pop_down();
}


void test_up_heapify_up(void);
void test_up_heapify_down(void);


void test_up_heapify_up(void){

	aunit_printf("\n##FUNCTION_START_up_heapify\n");
 }

void test_up_heapify_down(void){
	aunit_printf("\n##FUNCTION_END_up_heapify\n");
 }



void abnormal_up_heapify_case(int index);

void abnormal_up_heapify_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_up_heapify_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Heap *heap;
	int index;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	Heap *valueList_1[]={(Heap *)heap_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	int valueList_5[]={20};
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
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_up_heapify_5,false,0\n");
	aunit_printf("#CASE_START_test_up_heapify_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			heap=(Heap *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			heap_PTRTO_0_p_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(heap_PTRTO[0]).size=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(heap_PTRTO[0]).count=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			heap_PTRTO_0_p_PTRTO[0]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		up_heapify(heap,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_up_heapify_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_up_heapify_up();

	switch(caseIndex){
	case 5:
		test_up_heapify_5();
		break;
	default:
		abnormal_up_heapify_case(caseIndex);
		break;
	}

	test_up_heapify_down();
}


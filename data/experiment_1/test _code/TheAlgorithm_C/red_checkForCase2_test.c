void test_checkForCase2_up(void);
void test_checkForCase2_down(void);


void test_checkForCase2_up(void){

	aunit_printf("\n##FUNCTION_START_checkForCase2\n");
 }

void test_checkForCase2_down(void){
	aunit_printf("\n##FUNCTION_END_checkForCase2\n");
 }



void abnormal_checkForCase2_case(int index);

void abnormal_checkForCase2_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_checkForCase2_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Node *toDelete;
	int delete;
	int fromDirection;
	Node **root;


	//值序列相关
	Node *valueList_0[]={(Node *)toDelete_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&toDelete};
	unsigned int listLength_3=1;
	int valueList_4[]={190};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_node1};
	unsigned int listLength_5=1;
	int valueList_6[]={200};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)NULL};
	unsigned int listLength_8=1;
	struct node *valueList_9[]={(struct node *)NULL};
	unsigned int listLength_9=1;
	Node *valueList_10[]={(Node *)&struct_node1};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	leftRotate_call_counter = 0;
	rightRotate_call_counter = 0;
	free_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_checkForCase2_8,false,0\n");
	aunit_printf("#CASE_START_test_checkForCase2_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			toDelete=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fromDirection=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			delete=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node1.left=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(toDelete_PTRTO[0]).val=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(toDelete_PTRTO[0]).par=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_node1.val=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(toDelete_PTRTO[0]).color=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(toDelete_PTRTO[0]).left=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(toDelete_PTRTO[0]).right=(struct node *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			*root=(Node *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			struct_node1.color=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		checkForCase2(toDelete,delete,fromDirection,root);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("checkForCase2","toDelete->color",0,toDelete->color)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_checkForCase2_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_checkForCase2_up();

	switch(caseIndex){
	case 8:
		test_checkForCase2_8();
		break;
	default:
		abnormal_checkForCase2_case(caseIndex);
		break;
	}

	test_checkForCase2_down();
}


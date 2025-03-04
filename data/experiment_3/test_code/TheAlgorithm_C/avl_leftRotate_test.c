void test_leftRotate_up(void);
void test_leftRotate_down(void);


void test_leftRotate_up(void){

	aunit_printf("\n##FUNCTION_START_leftRotate\n");
 }

void test_leftRotate_down(void){
	aunit_printf("\n##FUNCTION_END_leftRotate\n");
 }



void abnormal_leftRotate_case(int index);

void abnormal_leftRotate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_leftRotate_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	avlNode *z;

	//声明返回值局部变量，若为基本类型赋默认值
	avlNode *returnValue = 0;

	//值序列相关
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int valueList_4[]={15};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode1};
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
	case_id=1;
	//初始化各桩函数调用计数器
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_1,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode1.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode1.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = leftRotate(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_1\n");
}

void test_leftRotate_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	avlNode *z;

	//声明返回值局部变量，若为基本类型赋默认值
	avlNode *returnValue = 0;

	//值序列相关
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	int valueList_4[]={30};
	unsigned int listLength_4=1;
	int valueList_5[]={20};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode1};
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
	case_id=2;
	//初始化各桩函数调用计数器
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_2,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode1.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode1.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = leftRotate(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_2\n");
}

void test_leftRotate_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	avlNode *z;

	//声明返回值局部变量，若为基本类型赋默认值
	avlNode *returnValue = 0;

	//值序列相关
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={25};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	struct AVLnode *valueList_3[]={(struct AVLnode *)NULL};
	unsigned int listLength_3=1;
	struct AVLnode *valueList_4[]={(struct AVLnode *)NULL};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_3,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(z_PTRTO[0]).key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(z_PTRTO[0]).height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = leftRotate(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_3\n");
}

void test_leftRotate_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	avlNode *z;

	//声明返回值局部变量，若为基本类型赋默认值
	avlNode *returnValue = 0;

	//值序列相关
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={45};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	int valueList_4[]={50};
	unsigned int listLength_4=1;
	struct AVLnode *valueList_5[]={(struct AVLnode *)&struct_AVLnode3};
	unsigned int listLength_5=1;
	int valueList_6[]={40};
	unsigned int listLength_6=1;
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_8=1;
	struct AVLnode *valueList_9[]={(struct AVLnode *)NULL};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_4,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode3.key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode3.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode2.height=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_AVLnode2.left=(struct AVLnode *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).key=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).height=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = leftRotate(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_leftRotate_up();

	switch(caseIndex){
	case 1:
		test_leftRotate_1();
		break;
	case 2:
		test_leftRotate_2();
		break;
	case 3:
		test_leftRotate_3();
		break;
	case 4:
		test_leftRotate_4();
		break;
	default:
		abnormal_leftRotate_case(caseIndex);
		break;
	}

	test_leftRotate_down();
}


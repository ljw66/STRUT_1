void test_insert_up(void);
void test_insert_down(void);


void test_insert_up(void){

	aunit_printf("\n##FUNCTION_START_insert\n");
 }

void test_insert_down(void){
	aunit_printf("\n##FUNCTION_END_insert\n");
 }



void abnormal_insert_case(int index);

void abnormal_insert_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	node *root;
	int data;

	//声明返回值局部变量，若为基本类型赋默认值
	node *returnValue = 0;

	//值序列相关
	int valueList_0[]={25};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)root_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)20};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	newNode_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_5,false,0\n");
	aunit_printf("#CASE_START_test_insert_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(root_PTRTO[0]).right.data=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(root_PTRTO[0]).right.left=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(root_PTRTO[0]).right.right=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(root_PTRTO[0]).data=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).left=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = insert(root,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("insert","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("insert","root->right->right->right","NULL",root->right->right->right)
	TEST_ASSERT_EQUAL_LONG("insert","root->right->right->left","NULL",root->right->right->left)
	TEST_ASSERT_EQUAL_INT("insert","root->right->right->data",25,root->right->right->data)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("newNode","newNode_call_counter",newNode_call_counter)

	aunit_printf("#CASE_END_test_insert_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_up();

	switch(caseIndex){
	case 5:
		test_insert_5();
		break;
	default:
		abnormal_insert_case(caseIndex);
		break;
	}

	test_insert_down();
}


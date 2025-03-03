void test_iget_up(void);
void test_iget_down(void);


void test_iget_up(void){

	aunit_printf("\n##FUNCTION_START_iget\n");
 }

void test_iget_down(void){
	aunit_printf("\n##FUNCTION_END_iget\n");
 }



void abnormal_iget_case(int index);

void abnormal_iget_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_iget_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int dev;
	unsigned int inum;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={20};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	release_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iget_7,false,0\n");
	aunit_printf("#CASE_START_test_iget_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = iget(dev,inum);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("iget","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_iget_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_iget_up();

	switch(caseIndex){
	case 7:
		test_iget_7();
		break;
	default:
		abnormal_iget_case(caseIndex);
		break;
	}

	test_iget_down();
}


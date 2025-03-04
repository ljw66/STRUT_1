void test_do_rand_up(void);
void test_do_rand_down(void);


void test_do_rand_up(void){

	aunit_printf("\n##FUNCTION_START_do_rand\n");
 }

void test_do_rand_down(void){
	aunit_printf("\n##FUNCTION_END_do_rand\n");
 }



void abnormal_do_rand_case(int index);

void abnormal_do_rand_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_do_rand_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long int *ctx;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int *valueList_0[]={(unsigned long int *)ctx_PTRTO};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_do_rand_4,false,0\n");
	aunit_printf("#CASE_START_test_do_rand_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(unsigned long int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = do_rand(ctx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("do_rand","returnValue",1849071919,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_do_rand_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_do_rand_up();

	switch(caseIndex){
	case 4:
		test_do_rand_4();
		break;
	default:
		abnormal_do_rand_case(caseIndex);
		break;
	}

	test_do_rand_down();
}


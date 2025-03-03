void test_process_up(void);
void test_process_down(void);


void test_process_up(void){

	aunit_printf("\n##FUNCTION_START_process\n");
 }

void test_process_down(void){
	aunit_printf("\n##FUNCTION_END_process\n");
 }



void abnormal_process_case(int index);

void abnormal_process_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_process_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *inname;
	int wid;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"testfile"};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	struct magic_set *valueList_5[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned short int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	int valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned int valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned short int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned int valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned short int valueList_21[]={0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={0};
	unsigned int listLength_23=1;
	int valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned int valueList_25[]={0};
	unsigned int listLength_25=1;
	unsigned short int valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned short int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned int valueList_28[]={0};
	unsigned int listLength_28=1;
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
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	fflush_call_counter = 0;
	putc_call_counter = 0;
	strcmp_call_counter = 0;
	fname_print_call_counter = 0;
	file_mbswidth_call_counter = 0;
	magic_error_call_counter = 0;
	magic_file_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_process_5,false,0\n");
	aunit_printf("#CASE_START_test_process_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			wid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bflag=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			inname=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nulsep=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ms=(struct magic_set *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			nopad=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			nobuffer=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).event_flags=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).file=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ms_PTRTO[0]).line=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(ms_PTRTO[0]).flags=(int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).error=(int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		returnValue = process(ms,inname,wid);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("process","nopad",0,nopad)
	TEST_ASSERT_EQUAL_INT("process","nulsep",2,nulsep)
	TEST_ASSERT_EQUAL_INT("process","nobuffer",0,nobuffer)
	TEST_ASSERT_EQUAL_INT("process","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("process","bflag",0,bflag)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fflush","fflush_call_counter",fflush_call_counter)
	OB_INT_EXPR("putc","putc_call_counter",putc_call_counter)
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("fname_print","fname_print_call_counter",fname_print_call_counter)
	OB_INT_EXPR("file_mbswidth","file_mbswidth_call_counter",file_mbswidth_call_counter)
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_file","magic_file_call_counter",magic_file_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_process_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_process_up();

	switch(caseIndex){
	case 5:
		test_process_5();
		break;
	default:
		abnormal_process_case(caseIndex);
		break;
	}

	test_process_down();
}

